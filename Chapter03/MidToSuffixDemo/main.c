#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_SIZE 100

int isOperator(char);
int compareOps(char);
void addToStack(char,int *);
char deleteFromStack(int *);

//简单的不带有括号的表达式转换
char mid[MAX_SIZE]={"a/b-c+d*e-a*c"};
char suffix[MAX_SIZE];
char stack[MAX_SIZE];

int top=0;
int n=-1;
int main()
{
    char token=mid[top];
    while(token){
            printf("top=> %d\n",top);
        if(isOperator(token)){
            if(compareOps(token)){
                printf("token => %c, n => %d, stack => %s, suffix => %s, top => %d\n",token,n,stack,suffix,top);
                addToStack(token,&n);
            }else{
                suffix[top]=deleteFromStack(&n);
                addToStack(token,&n);
            }

        }else{
            suffix[top]=token;
        }

        token=mid[++top];
    }

    printf("%s\n",suffix);
    return 0;
}

int isOperator(char c){
    if(c=='+'
       || c=='-'
       || c=='*'
       || c=='/'){
        return TRUE;
    }else{
        return FALSE;
    }
}

int compareOps(char c){
    if(n==-1){
        return 1;
    }

    if((c=='*' || c=='/')
       &&
       (stack[n]=='+' || stack[n]=='-')){
        return 1;
       }

    return 0;
}

void addToStack(char c,int *n){
    stack[++(*n)]=c;
}

char deleteFromStack(int *n){
    return stack[--(*n)];
}
