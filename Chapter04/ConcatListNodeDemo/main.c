#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode *PListNode;
typedef struct ListNode{
    int data;
    PListNode link;
} ListNode;

PListNode concat(PListNode,PListNode);
void printListNode(PListNode);
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

    printf("//=======concat====\n");

    PListNode node3=(PListNode)malloc(sizeof(ListNode));
    node3->data=3;
    node3->link=NULL;

    PListNode node4=(PListNode)malloc(sizeof(ListNode));
    node4->data=4;
    node4->link=NULL;
    node3->link=node4;

    PListNode catNode=concat(node0,node3);
    printListNode(catNode);

    printListNode(node0);
    return 0;
}

PListNode concat(PListNode ptr1,PListNode ptr2){
    if(!ptr1){
        return ptr2;
    }else if(!ptr2){
        return ptr1;
    }else{
        PListNode node,rear;
        node=ptr1;
        rear=node;

        ptr1=ptr1->link;
        while(ptr1){
            rear->link=ptr1;
            rear=ptr1;

            ptr1=ptr1->link;
        }

        rear->link=ptr2;

        return node;
    }
}

PListNode invert(PListNode ptr){
    PListNode node=NULL;
    while(ptr){
        PListNode temp=ptr->link;
        ptr->link=node;
        node=ptr;

        ptr=temp;
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
