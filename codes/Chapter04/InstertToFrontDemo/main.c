#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode *PListNode;
typedef struct ListNode{
    int data;
    PListNode link;
} ListNode;

void addNode(ListNode);
void printListNode(PListNode);

PListNode ptr=NULL;
int main()
{
    ListNode node0;
    node0.data=0;
    addNode(node0);

    ListNode node1;
    node1.data=1;
    addNode(node1);

    ListNode node2;
    node2.data=2;
    addNode(node2);

    //printListNode(ptr);
    return 0;
}

void addNode(ListNode node){
    if(!ptr){
        ptr=&node;
        node.link=ptr;
        return;
    }

    node.link=ptr;
    ptr->link=&node;
}

void printListNode(PListNode ptr){
    int i=0;
    while(ptr){
        printf("node%d:data => %d, link => %x\n",i++,ptr->data,ptr->link);
        ptr=ptr->link;
    }
}


