#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 3
#define TRUE 1
#define FALSE 0

//定义一个测试结构
typedef struct {
    //为了简便仅定义一个域
    char key[10];
}Element;

typedef struct{
    Element el[MAX_SIZE];
    int top;
} Stack;

int IsEmpty(Stack *);
int IsFull(Stack *);
void Add(Stack *, Element);
void Delete(Stack *);

int main()
{
    Stack stack;
    stack.top=-1;
    Stack *pstack=&stack;

    Element e1;
    strcpy(e1.key,"e1.key");
    Add(pstack,e1);

    Element e2;
    strcpy(e2.key,"e2.key");
    Add(pstack,e2);

    Element e3;
    strcpy(e3.key,"e3.key");
    Add(pstack,e3);

    Element e4;
    strcpy(e4.key,"e4.key");
    Add(pstack,e4);

    printf("is stack full?%s\n",pstack->top>=MAX_SIZE-1?"是":"否");
    printf("the size of stack is %d\n",pstack->top);

    Delete(pstack);
    Delete(pstack);
    Delete(pstack);
    Delete(pstack);

    return 0;
}

//判断栈是否已满
int IsFull(Stack *stack){
    if(stack->top>=MAX_SIZE){
        return TRUE;
    }

    return FALSE;
}

//判断栈是否为空
int IsEmpty(Stack *stack){
    if(stack->top<0){
        return TRUE;
    }

    return FALSE;
}

void Add(Stack *stack, Element e){
    if(stack->top<MAX_SIZE-1){
        stack->el[++stack->top]=e;

    }else{
        printf("Error,the stack is full\n");
    }
}

void Delete(Stack *stack){
    if(stack->top>-1){
        Element e;
        stack->el[stack->top--]=e;
    }else{
        printf("Error,the stack is empty\n");
    }
}
