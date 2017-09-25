#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode *PListNode;
typedef struct ListNode{
    int data;
    PListNode link;
} ListNode;

PListNode invert(PListNode);

int main()
{
    PListNode node0=(PListNode)malloc(sizeof(ListNode));
    node0->data=0;
    node0->link=NULL;

    PListNode node1=(PListNode)malloc(sizeof(ListNode));
    node1->data=1;
    node1->link=NULL;
    node0->link=node1;

    PListNode node2=(PListNode)malloc(sizeof(ListNode));
    node2->data=2;
    node2->link=NULL;
    node1->link=node2;
    printListNode(node0);

    printf("//======invert=====\n");
    PListNode invertP=invert(node0);
    printListNode(invertP);

    return 0;
}

PListNode invert(PListNode ptr){
    PListNode node;
    while(ptr){
        PListNode temp=ptr;
        ptr->link=node;
        node=ptr;

        ptr=temp->link;
    }

    return node;
}


void printListNode(PListNode ptr){
    int i=0;
    while(ptr){
        printf("node%d:data => %d,link => %x\n",i++,ptr->data,ptr->link);
        ptr=ptr->link;
    }
}
