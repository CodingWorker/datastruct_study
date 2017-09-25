#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_LOOP_QUEUE_SIZE 10

typedef struct{
    char key[20];
} Element;

int isFull(int,int);
int isEmpty(int,int);
void addQ(int *,int *,Element);
Element deleteQ(int *,int *);
void queue_full();
void queue_empty();

Element loopQueue[MAX_LOOP_QUEUE_SIZE];
int front=0;
int rear=0;

int main()
{

    return 0;
}

int isFull(int front,int rear){
    if((rear+1)%MAX_LOOP_QUEUE_SIZE==front){
        return TRUE;
    }else{
        return FALSE;
    }
}

int isEmpty(int front,int rear){
    if(front==rear){
        return TRUE;
    }else{
        return FALSE;
    }
}

void addQ(int *front,int *rear,Element e){
    if(isFull(*front,*rear)){
        printf("Error\n");
        queue_full();
        return;
    }

    *rear=(*rear+1)%MAX_LOOP_QUEUE_SIZE;
    loopQueue[*rear]=e;
}

Element deleteQ(int *front,int *rear){
    if(isEmpty(*front,*rear)){
        printf("Error\n");
        queue_empty();
        return;
    }

    *front=(*front+1)/MAX_LOOP_QUEUE_SIZE;
    return loopQueue[*front];
}

void queue_full(){}
void queue_empty(){}
