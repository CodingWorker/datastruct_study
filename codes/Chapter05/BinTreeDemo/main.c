#include <stdio.h>
#include <stdlib.h>

//binTree�����ݶ���
typedef struct BinTree *PBinTree;
typedef struct BinTree{
    int data;
    PBinTree lChild;
    PBinTree Rchild;
} BinTree;

PBinTree create(int);

int main()
{
    //��бBinTree
    PBinTree cNode1=create(1);
    PBinTree cNode2=create(2);
    cNode1->lChild=cNode2;

    PBinTree cNode3=create(3);
    cNode2->lChild=cNode3;

    PBinTree cNode4=create(4);
    cNode3->lChild=cNode4;

    //��ȫBinTree,hava rChild






    return 0;
}

PBinTree create(int data){
    PBinTree node=(PBinTree)malloc(sizeof(BinTree));
    node->data=data;
    node->lChild=NULL;
    node->Rchild=NULL;

    return node;
}
