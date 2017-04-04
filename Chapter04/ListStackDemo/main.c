#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct{
    char key[20];
    //others fields
} Element;
typedef struct ListNode *PListNode;
typedef struct ListNode{
    Element element;
    PListNode link;
} ListNode;

int isEmpty(PListNode);
void add(PListNode,PListNode);
PListNode del(PListNode);
void printListNode(PListNode);

PListNode ptr=NULL;

int main()
{
    ptr=(PListNode)malloc(sizeof(ListNode));
    strcpy(ptr->element.key,"首节点");
    ptr->link=NULL;

    PListNode node0=(PListNode)malloc(sizeof(ListNode));
    strcpy(node0->element.key,"node0");
    node0->link=NULL;
    add(ptr,node0);

    PListNode node1=(PListNode)malloc(sizeof(ListNode));
    strcpy(node1->element.key,"node1");
    node1->link=NULL;
    add(ptr,node1);

    PListNode node2=(PListNode)malloc(sizeof(ListNode));
    strcpy(node2->element.key,"node2");
    node2->link=NULL;
    add(ptr,node2);

    printListNode(ptr);
    printf("//=========出栈======\n");
    printListNode(del(ptr));




    return 0;
}

void printListNode(PListNode ptr){
    while(ptr){
        printf("node:Element.key => %s\n",ptr->element.key);
        ptr=ptr->link;
    }
}

void add(PListNode ptr,PListNode newNode){
    newNode->link=ptr->link;
    ptr->link=newNode;
}

PListNode del(PListNode ptr){
    if(isEmpty(ptr)){
        printf("Error,the stack is empty\n");
        return;
    }

    PListNode pNode=ptr->link;
    ptr->link=ptr->link->link;

    return pNode;
}

int isEmpty(PListNode ptr){
    if(ptr->link==NULL){
        return TRUE;
    }

    return FALSE;
}

