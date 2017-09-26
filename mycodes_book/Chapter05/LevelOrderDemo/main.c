#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
#define TRUE 1
#define FALSE 0

typedef struct BinTree *PBinTree;
typedef struct BinTree{
    int data;
    PBinTree left;
    PBinTree right;
} BinTree;

void addQ(int,int *,PBinTree);
PBinTree del(int *,int);
int isFull(int,int);
int isEmpty(int,int);
void levelOrder(PBinTree);

PBinTree queue[MAX_SIZE];
int front=0;
int rear=0;
int main()
{







    return 0;
}

void levelOrder(PBinTree ptr){
    if(!ptr){
        printf("¶þ²æÊ÷Îª¿Õ");
        return;
    }

    addQ(ptr);
    while(TRUE){
        ptr=del(int *front,int rear);
        if(!ptr){
            break;
        }

        printf("BinTree:data => %d\n",ptr->data);
        addQ(int front,int *rear,ptr->left);
        addQ(int front,int *rear,ptr->right);
    }
}

void addQ(int front,int *rear,PBinTree ptr){
    if(isFull(front,*rear)){
        printf("the queue is full");
        return;
    }

    queue[(++*rear)%MAX_SIZE]=ptr;
}

PBinTree del(int *front,int rear){
    if(isEmpty(*front,rear)){
        printf("the queue is empty");
        return;
    }
    PBinTree ptr=queue[*front+1];
    *front=(*front)++%MAX_SIZE;

    return ptr;
}

int isFull(int front,int rear){
    if((rear+1)/MAX_SIZE==front){
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
