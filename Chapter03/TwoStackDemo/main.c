#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_SIZE 5

typedef struct{
    char key[20];
    int tag;
} Element;

enum{
    stack1,stack2
} StackTag;

void add(Element,int,int *,int);
Element del(int,int *);
int isFull(int,int);
int isEmpty(int,int);

Element stack[MAX_SIZE];

int top1=-1;
int top2=MAX_SIZE;

int main()
{
    Element data[MAX_SIZE];
    int i=0;
    for(;i<MAX_SIZE;i++){
        data[i].tag=i;
    }

    Element e;
    add(data[0],stack1,&top1,top2);
    add(data[1],stack1,&top1,top2);
    add(data[2],stack1,&top1,top2);
    add(data[3],stack2,&top2,top1);
    add(data[4],stack2,&top2,top1);

    add(data[0],stack1,&top1,top2);
    add(data[4],stack2,&top2,top1);

    printf("del => %d\n",del(stack1,&top1).tag);
    printf("del => %d\n",del(stack2,&top2 ).tag);


    return 0;
}

void add(Element e,int tag,int *top,int otherTop){
    if(isFull(*top,otherTop)){
            printf("can not push,the stack is full\n");
            return;
    }

    if(tag==stack1){
        stack[++(*top)]=e;
    }else{
        stack[--(*top)]=e;
    }
}

Element del(int tag,int *top){
    if(isEmpty(tag,*top)){
        printf("stack is empty,nothing to delete\n");
        return;
    }

    if(tag==stack1){
        return stack[(*top)--];
    }else{
        return stack[(*top)++];
    }
}

int isFull(int top,int otherTop){
    if(top+1==otherTop || otherTop+1==top){
        return TRUE;
    }

    return FALSE;
}

int isEmpty(int tag,int top){
    if(tag==stack1 && top==-1){
        return TRUE;
    }else if(tag==stack2 && top==MAX_SIZE){
        return TRUE;
    }

    return FALSE;
}
