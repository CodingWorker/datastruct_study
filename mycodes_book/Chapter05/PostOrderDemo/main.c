#include <stdio.h>
#include <stdlib.h>

typedef struct BinTree *PBinTree;
typedef struct BinTree{
    int data;
    PBinTree lChild;
    PBinTree rChild;
} BinTree;

void postOrder(PBinTree);
PBinTree create(int);

int main()
{
    PBinTree cNode1=create(1);
    PBinTree cNode2=create(2);
    cNode1->lChild=cNode2;

    PBinTree cNode3=create(3);
    cNode1->rChild=cNode3;

    PBinTree cNode4=create(4);
    cNode2->lChild=cNode4;

    postOrder(cNode1);

    return 0;
}

void postOrder(PBinTree ptr){
    if(ptr){
        postOrder(ptr->lChild);
        postOrder(ptr->rChild);
        printf("ptr->data => %d\n",ptr->data);
    }
}

PBinTree create(int data){
    PBinTree ptr=(PBinTree)malloc(sizeof(BinTree));
    ptr->data=data;
    ptr->lChild=NULL;
    ptr->rChild=NULL;

    return ptr;
}
