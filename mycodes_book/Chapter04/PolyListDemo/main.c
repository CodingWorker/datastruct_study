#include <stdio.h>
#include <stdlib.h>

//多项式链表表示
typedef struct ListNode *PListNode;
typedef struct ListNode{
    int xishu;
    int zhishu;
    PListNode link;
} ListNode;
PListNode polyAdd(PListNode,PListNode);

int main()
{
    printf("//=====多项式1=========\n");
    //多项式1:
    PListNode ptr1=(PListNode)malloc(sizeof(ListNode));
    ptr1->xishu=3;
    ptr1->zhishu=14;
    ptr1->link=NULL;

    PListNode ptr1_1=(PListNode)malloc(sizeof(ListNode));
    ptr1_1->xishu=2;
    ptr1_1->zhishu=8;
    ptr1_1->link=NULL;
    ptr1->link=ptr1_1;

    PListNode ptr1_2=(PListNode)malloc(sizeof(ListNode));
    ptr1_2->xishu=1;
    ptr1_2->zhishu=0;
    ptr1_2->link=NULL;
    ptr1_1->link=ptr1_2;

    printListNode(ptr1);

    printf("//=======多项式2=======\n");

    //多项式2:
    PListNode ptr2=(PListNode)malloc(sizeof(ListNode));
    ptr2->xishu=8;
    ptr2->zhishu=14;
    ptr2->link=NULL;

    PListNode ptr2_1=(PListNode)malloc(sizeof(ListNode));
    ptr2_1->xishu=-3;
    ptr2_1->zhishu=10;
    ptr2_1->link=NULL;
    ptr2->link=ptr2_1;

    PListNode ptr2_2=(PListNode)malloc(sizeof(ListNode));
    ptr2_2->xishu=10;
    ptr2_2->zhishu=6;
    ptr2_2->link=NULL;
    ptr2_1->link=ptr2_2;

    printListNode(ptr2);

    //多项式的加法
    printf("ptr1 + ptr2 =>\n");

    PListNode addPtr=polyAdd(ptr1,ptr2);

    printListNode(addPtr->link);
    return 0;
}

void printListNode(PListNode ptr){
    while(ptr){
        printf("系数: %d, 指数: %d\n",ptr->xishu,ptr->zhishu);
        ptr=ptr->link;
    }
}

PListNode polyAdd(PListNode ptr1,PListNode ptr2){
    PListNode ptr=(PListNode)malloc(sizeof(ListNode));
    while(ptr1 && ptr2){
        int zhishu1=ptr1->zhishu;
        int zhishu2=ptr2->zhishu;
        PListNode pNode=(PListNode)malloc(sizeof(PListNode));
        if(zhishu1>zhishu2){
            pNode->xishu=ptr1->xishu;
            pNode->zhishu=ptr1->zhishu;

            ptr1=ptr1->link;
        }else if(zhishu1<zhishu2){
            pNode->xishu=ptr2->xishu;
            pNode->zhishu=ptr2->zhishu;

            ptr2=ptr2->link;
        }else{
            pNode->xishu=ptr1->xishu+ptr2->xishu;
            pNode->zhishu=ptr1->zhishu;

            ptr1=ptr1->link;
            ptr2=ptr2->link;
        }

        pNode->link=ptr->link;
        ptr->link=pNode;
    }

    while(ptr1){
        PListNode pNode=(PListNode)malloc(sizeof(PListNode));
        pNode->xishu=ptr1->xishu;
        pNode->zhishu=ptr1->zhishu;

        pNode->link=ptr->link;
        ptr->link=pNode;

        ptr1=ptr1->link;
    }

    while(ptr2){
        PListNode pNode=(PListNode)malloc(sizeof(PListNode));
        pNode->xishu=ptr2->xishu;
        pNode->zhishu=ptr2->zhishu;

        pNode->link=ptr->link;
        ptr->link=pNode;

        ptr1=ptr2->link;
    }

    return ptr;
}
