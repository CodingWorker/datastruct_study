#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct BinTree *PBinTree;
typedef struct BinTree{
    int data;
    PBinTree lChild;
    PBinTree rChild;
} BinTree;

typedef struct BinStack{
    PBinTree item;
    PBinTree p;
} BinStack;

void LoopInOrder(PBinTree);
PBinTree create(int);
void addStack(PBinTree);
BinStack *del();

BinStack *stack;

int main()
{
    stack=(BinStack *)malloc(sizeof(BinStack));
    stack->p=NULL;
    PBinTree cNode1=create(1);
    PBinTree cNode2=create(2);
    cNode1->lChild=cNode2;

    PBinTree cNode3=create(3);
    cNode1->rChild=cNode3;

    PBinTree cNode4=create(4);
    cNode2->lChild=cNode4;

    LoopInOrder(cNode1);
    return 0;
}

void LoopInOrder(PBinTree ptr){
    stack->item=ptr;
    addLeft(ptr);

    BinStack *node=stack;
    stack=stack->p;
    while(node){
        printf("BinTree->data => %d\n",node->item->data);
        if(node->item->rChild){
            addLeft(node->item->rChild);
        }

        stack=stack->p;
    }



}

void addRight(PBinTree rNode){
    if(rNode){
        addStack(rNode);
    }
}

void addLeft(PBinTree lNode){
    if(lNode){
        addStack(lNode);
        addLeft(lNode->lChild);
    }
}

void addStack(PBinTree ptr){
    if(ptr){
        BinStack *s=(BinStack *)malloc(sizeof(BinStack));
        s->item=ptr;
        s->p=stack;
        stack=s;
    }
}

BinStack *del(){
    if(stack){
        PBinTree temp=stack;
        stack=stack->p;

        return temp;
    }
}

PBinTree create(int data){
    PBinTree ptr=(PBinTree)malloc(sizeof(BinTree));
    ptr->data=data;
    ptr->lChild=NULL;
    ptr->rChild=NULL;

    return ptr;
}
