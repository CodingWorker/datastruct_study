#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

//定义结构指针
typedef struct ListNode *PListNode;
typedef struct{
    char data[20];
    PListNode link;
} ListNode;

ListNode *ptr;
int main()
{
    ptr=(ListNode *)malloc(sizeof(ListNode));
    strcpy(ptr->data,"首节点");
    return 0;
    ptr->link=NULL;

    ListNode *node1=(ListNode *)malloc(sizeof(ListNode));
    strcpy(node1->data,"节点1");
    node1->link=NULL;
    //ptr->link=node1;
    //printf("&node1 => %x\n",node1);
    //printf("first node:data => %s\n",ptr->link);
    //printf("first node:data => %x",ptr->link);




    return 0;
}
