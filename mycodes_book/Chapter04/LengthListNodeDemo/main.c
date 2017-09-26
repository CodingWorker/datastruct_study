#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode *PListNode;
typedef struct ListNode{
    int data;
    PListNode link;
} ListNode;

int length(PListNode);

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

    printf("the length: %d\n",length(node0));

    PListNode node3=(PListNode)malloc(sizeof(ListNode));
    node3->data=3;
    node3->link=NULL;
    node2->link=node3;

    PListNode node4=(PListNode)malloc(sizeof(ListNode));
    node4->data=4;
    node4->link=NULL;
    node3->link=node4;

    printf("the length: %d\n",length(node0));

    return 0;
}

int length(PListNode ptr){
    int count=0;
    if(ptr){
        while(ptr){
            count++;
            ptr=ptr->link;
        }
    }

    return count;
}
