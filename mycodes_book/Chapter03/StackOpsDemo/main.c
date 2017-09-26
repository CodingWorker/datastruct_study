#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_STACK_SIZE 100

typedef struct{
    char key[20];
} element;

element stack[MAX_STACK_SIZE];
int top=-1;

int IsEmpty(int);
int IsFull(int);
void add(int *top, element item);
element delete(int *top);
void stack_full();
void stack_empty();
int main()
{


    return 0;
}

void add(int *top, element item){
    if(*top>=MAX_STACK_SIZE){
        stack_full();
        return;
    }

    stack[++*top]=item;
}

element delete(int *top){
    if(*top==-1){
        stack_empty();
        return;
    }

    return stack[(*top)--];
}

void stack_full(){
    printf("the stack is full\n");
}

void stack_empty(){
    printf("the stack is empty");
}
