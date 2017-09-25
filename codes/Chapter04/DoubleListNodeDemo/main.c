#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode *PListNode;
typedef struct ListNode{
    int data;
    PListNode llink;
    PListNode rlink;
} ListNode;

PListNode ptr;
ptr=NULL;
int main()
{
    ptr=(PListNode)malloc(sizeof(ListNode))


    printf("Hello world!\n");
    return 0;
}
