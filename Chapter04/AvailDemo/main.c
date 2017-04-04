#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct ListNode *PListNode;
typedef struct ListNode{
    int data;
    PListNode link;
} ListNode;

PListNode getNode();
PListNode retNode(PListNode);
void cerase();

PListNode avail;
int main()
{
    printf("Hello world!\n");
    return 0;
}

PListNode getNode(){
    PListNode node;
    if(avail){
        node=avail;
        avail=avail->link;
    }else{
        node=(PListNode)malloc(sizeof(PListNode));
        node->link=NULL;
    }

    return node;
}

void retNode(PListNode ptr){
    if(avail){
        ptr->link=avail;
    }else{
        ptr->link=NULL;
    }

    avail=ptr;
}

void cerase(){
    while(avail){
        PListNode temp=avail;
        avail=avail->link;
        free(temp);
    }
}
