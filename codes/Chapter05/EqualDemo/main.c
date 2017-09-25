#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct BinTree *PBinTree;
typedef struct BinTree{
    int data;
    PBinTree left;
    PBinTree right;
} BinTree;

PBinTree create(int);
void postOrder(PBinTree);
PBinTree copy(PBinTree);
int equal(PBinTree,PBinTree);

int main()
{
    PBinTree node1=create(1);

    PBinTree node2=create(2);
    node1->left=node2;

    PBinTree node3=create(3);
    node1->right=node3;

    PBinTree node4=create(4);
    node2->left=node4;

    PBinTree node5=create(5);
    node2->right=node5;

    PBinTree node6=create(6);
    node3->left=node6;

    postOrder(node1);

    PBinTree copyNode=copy(node1);

    printf("//======copy=====\n");
    postOrder(copyNode);
    copyNode=(PBinTree)malloc(sizeof(BinTree));
    copyNode->data=1;cc

    printf("is node1 and cooyNode equal??\n");
    if(equal(node1,copyNode)){
        printf("node1 is equal to copyNode");
    }else{
        printf("node1 is not equal to copyNode");
    }

    return 0;
}

PBinTree create(int data){
    PBinTree node=(PBinTree)malloc(sizeof(BinTree));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
}

void postOrder(PBinTree ptr){
    if(ptr){
        postOrder(ptr->left);
        postOrder(ptr->right);

        printf("BinTree:data => %d, left => %x, right => %x\n",ptr->data,ptr->left,ptr->right);
    }
}

PBinTree copy(PBinTree ptr){
    if(ptr){
        PBinTree node=(PBinTree)malloc(sizeof(BinTree));
        node->left=copy(ptr->left);
        node->right=copy(ptr->right);
        node->data=ptr->data;

        return node;
    }
}

int equal(PBinTree ptr1,PBinTree ptr2){
    if(!ptr1 && !ptr2){
        return TRUE;
    }else if(!ptr1 && ptr2){
        return FALSE;
    }else if(ptr1 && !ptr2){
        return FALSE;
    }

    if(ptr1->data==ptr2->data){
        return equal(ptr1->left,ptr2->left)
            && equal(ptr1->right,ptr2->right);
    }else{
        return FALSE;
    }
}
