#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100
#define MAX_EXPR_SIZE 100

typedef enum{
    lparen,rparen,plus,minus,time,divide,mod,eos,operand
} precedence;

void addToStack(int,int *);
int deleteFromStack(int *);
char get_token(int *);

int stack[MAX_STACK_SIZE];
char expr[MAX_EXPR_SIZE]={"123*+\\"};
int top=0;
int n=0;
int op1;
int op2;
char token;
int main()
{
    int result=0;
    token=get_token(&top);
    while(token){
        if(token =='\\'){
            printf("success");
            break;
        }

        if(token=='+'
           || token=='-'
           || token=='*'
           || token=='/'){
            op1=deleteFromStack(&n);
            op2=deleteFromStack(&n);
            switch(token){
                case '+':
                result+=op1+op2;
                break;
                case '*':
                    result+=op1*op2;
                    break;
                case '/':
                    result+=op2/op1;
                    break;
                case '-':
                    result+=op2-op1;
                    break;
                }
           }else{
                addToStack((int)token,&n);
           }

        token=get_token(&top);
    }
    printf("the sum is: %d\n",result);
    return 0;
}

char get_token(int *top){
    char op= expr[(*top)++];
    switch(op){
    case '+':
    case '-':
    case '*':
    case '/':
    case '\\':
        return op;
    default:
        return op;
    }
}

void addToStack(int item,int *n){
    stack[(*n)++]=item;
}

int deleteFromStack(int *n){
    return stack[--(*n)];
}
