#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR_SZE 10
struct node{
    char data[MAX_CHAR_SZE];
    struct node *next;
};

//自引用：先定义结构在，在将此结构抽象出类型
typedef struct node Node;


int main()
{
    Node node4;
    strcpy(node4.data,"sat");
    node4.next=NULL;

    Node node3;
    strcpy(node3.data,"mat");
    node3.next=&node4;

    Node node2;
    strcpy(node2.data,"fat");
    node2.next=&node3;

    Node node1;
    strcpy(node1.data,"cat");
    node1.next=&node2;

    Node node0;
    strcpy(node0.data,"bat");
    node0.next=&node1;

    Node link;
    link.next=&node0;

    Node *list;
    list=&link;
    int i=0;
    while(list->next){
        Node n=*(list->next);
        printf("node%d:address => %x, data => %s\n",i++,n.next,n.data);
        list=list->next;
    }


    return 0;
}
