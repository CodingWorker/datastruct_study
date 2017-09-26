#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int data;
} Element;
typedef struct BinTree *PBinTree;
typedef struct BinTree{
    Element e;
    PBinTree left;
    PBinTree right;
} BinTree;

void insert(PBinTree,Element);
void preOrder(PBinTree ptr);
PBinTree search(PBinTree,Element);

PBinTree search2(PBinTree,Element);

int main()
{
    PBinTree node1=(PBinTree)malloc(sizeof(BinTree));
    node1->e.data=30;
    node1->left=NULL;
    node1->right=NULL;

    PBinTree node2=(PBinTree)malloc(sizeof(BinTree));
    node2->e.data=5;
    node2->left=NULL;
    node2->right=NULL;
    node1->left=node2;

    PBinTree node3=(PBinTree)malloc(sizeof(BinTree));
    node3->e.data=40;
    node3->left=NULL;
    node3->right=NULL;
    node1->right=node3;

    PBinTree node4=(PBinTree)malloc(sizeof(BinTree));
    node4->e.data=2;
    node4->left=NULL;
    node4->right=NULL;
    node2->left=node4;

    preOrder(node1);
    printf("//=====insert Element.data=5 =====\n");
    Element e;
    e.data=50;
    insert(node1,e);
    preOrder(node1);


    return 0;
}

void insert(PBinTree ptr,Element e){
    if(search(ptr,e)){
        printf("there is e in the tree\n");
        return;
    }

    if(!ptr){
        ptr=(PBinTree)malloc(sizeof(BinTree));
        ptr->e.data=e.data;
        return;
    }

    PBinTree newP=(PBinTree)malloc(sizeof(BinTree));
    newP->e.data=e.data;
    newP->left=NULL;
    newP->right=NULL;

    PBinTree end=ptr;
    while(ptr){
        if(ptr->right){
            end=ptr->right;
            ptr=ptr->right;
        }else if(ptr->left){
            end=ptr->right;
        }else{
            break;
        }
    }

    if(end->e.data>e.data){
        end->left=newP;
    }else{
        end->right=newP;
    }
}

void preOrder(PBinTree ptr){
    if(ptr){
        printf("BinTree:data => %d, left =>%x, right => %x\n",
               ptr->e.data,ptr->left,ptr->right);
        preOrder(ptr->left);
        preOrder(ptr->right);
    }
}

PBinTree search(PBinTree ptr,Element e){
    if(ptr){
        if(ptr->e.data>e.data){
            return search(ptr->left,e);
        }else if(ptr->e.data<e.data){
            return search(ptr->right,e);
        }else{
            return ptr;
        }
    }

    return NULL;
}

PBinTree search2(PBinTree ptr,Element e){
    while(ptr){
        if(ptr->e.data>e.data){
            ptr=ptr->left;
        }else if(ptr->e.data<e.data){
            ptr=ptr->right;
        }else{
            return ptr;
        }
    }

    return NULL;
}
