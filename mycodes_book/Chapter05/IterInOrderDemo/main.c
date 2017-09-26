#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct BinTree *PBinTree;
typedef struct BinTree{
    int data;
    PBinTree left;
    PBinTree right;
} BinTree;

PBinTree create(int);
void addStack(PBinTree);
PBinTree del();
void iterInOrder();

PBinTree stack[MAX_SIZE];
int top=-1;

int main()
{
    PBinTree cNode1=create(1);
    PBinTree cNode2=create(2);
    cNode1->left=cNode2;

    PBinTree cNode3=create(3);
    cNode1->right=cNode3;

    PBinTree cNode4=create(4);
    cNode2->left=cNode4;

    PBinTree ptr=cNode1;
    while(1){
        while(1){
            if(!ptr){
                break;
            }
            addStack(ptr);
            ptr=ptr->left;
        }

        ptr=del();
        if(!ptr){
            break;
        }
        printf("BinTree:data => %d\n",ptr->data);
        ptr=ptr->right;
    }

    return 0;
}

PBinTree create(int data){
    PBinTree ptr=(PBinTree)malloc(sizeof(BinTree));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;

    return ptr;
}

void addStack(PBinTree ptr){
    if(top>=MAX_SIZE-1){
        printf("the stack is full");
        return;
    }
    if(ptr){
        stack[++top]=ptr;
    }
}

PBinTree del(){
    if(top<0){
        printf("the stack is empty");
        return NULL;
    }
    return stack[top--];
}
