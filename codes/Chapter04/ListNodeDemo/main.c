#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

//����ṹָ��
typedef struct ListNode *PListNode;
typedef struct{
    char data[20];
    PListNode link;
} ListNode;

ListNode *ptr;
int main()
{
    ptr=(ListNode *)malloc(sizeof(ListNode));
    strcpy(ptr->data,"�׽ڵ�");
    return 0;
    ptr->link=NULL;

    ListNode *node1=(ListNode *)malloc(sizeof(ListNode));
    strcpy(node1->data,"�ڵ�1");
    node1->link=NULL;
    //ptr->link=node1;
    //printf("&node1 => %x\n",node1);
    //printf("first node:data => %s\n",ptr->link);
    //printf("first node:data => %x",ptr->link);




    return 0;
}
