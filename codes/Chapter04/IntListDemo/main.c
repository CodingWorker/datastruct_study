#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

//允许定义不存在结构类型的指针
typedef struct List_node *List_pointer;

typedef struct List_node{
    int data;
    List_pointer link;
}List_node;

void listOutput(List_pointer);

List_pointer ptr=NULL;
int main()
{
    List_pointer node2=(List_pointer)malloc(sizeof(List_node));
    node2->data=2;
    node2->link=NULL;

    List_pointer node1=(List_pointer)malloc(sizeof(List_node));
    node1->data=1;
    node1->link=node2;

    ptr=(List_pointer)malloc(sizeof(List_node));
    ptr->data=0;
    ptr->link=node1;

    printf("first:data => %d, link => %x\n",ptr->data,ptr->link);
    printf("second:data => %d, link => %x\n",ptr->link->data,ptr->link->link);
    printf("third:data => %d\n",ptr->link->link->data);

    listOutput(ptr);
    return 0;
}

void listOutput(List_pointer ptr){
    if(ptr!=NULL){
        while(ptr){
            printf("node:data => %d\n",ptr->data);
            ptr=ptr->link;
        }
    }
}
