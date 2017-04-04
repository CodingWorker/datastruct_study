#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100
#define ISHEAPFULL(n) (n>=MAX_HEAP_SIZE-1)
#define ISHEAPEMPTY(n) (!n)

typedef struct{
    int data;
} Element;

void insertMaxHeap(Element,int *);
Element create(int);
void printMaxHeap(int);
Element del(int *);

Element heap[MAX_HEAP_SIZE];

int main()
{
    int top=0;

    Element e1;
    e1.data=30;

    Element e2;
    e2.data=27;

    Element e3;
    e3.data=25;

    Element e4;
    e4.data=20;

    Element e5;
    e5.data=24;

    Element e6;
    e6.data=21;

    Element e7;
    e7.data=12;

    Element e8;
    e8.data=15;

    insertMaxHeap(e1,&top);
    insertMaxHeap(e2,&top);
    insertMaxHeap(e3,&top);
    insertMaxHeap(e4,&top);
    insertMaxHeap(e5,&top);
    insertMaxHeap(e6,&top);
    insertMaxHeap(e7,&top);
    insertMaxHeap(e8,&top);

    printMaxHeap(top);

    printf("//======add 234 to heap=====\n");
    Element newE;
    newE.data=234;
    insertMaxHeap(newE,&top);
    printMaxHeap(top);

    printf("//======del from heap=====\n");
    Element delE=del(&top);
    printf("the del element:data => %d\n",delE.data);
    printMaxHeap(top);

    return 0;
}

void printMaxHeap(int top){
    if(top==0){
        return;
    }

    int i=1;
    while(1){
        printf("e:data => %d\n",heap[i++].data);
        if(i>top){
            break;
        }
    }
}

void insertMaxHeap(Element e,int *top){
    if(ISHEAPFULL(*top)){
        printf("the heap is full");
        return;
    }

    heap[++(*top)]=e;
    int index=*top;
    while(1){
        if(index/2==0){
            return;
        }
        Element parent=heap[index/2];
        if(parent.data<e.data){
            heap[index/2]=e;
            heap[index]=parent;
        }else{
            break;
        }

        index/=2;
    }
}

Element del(int *top){
    if(ISHEAPEMPTY(*top)){
        printf("the heap is empty");
        return;
    }

    if((*top)==1){
        return heap[(*top)--];
    }

    Element delE=heap[1];
    heap[1]=heap[(*top)+1];
    int index=1;
    while(1){
        if((2*index<*top && heap[index].data<heap[2*index].data)
           || (2*index+1<*top && heap[index].data<heap[2*index+1].data)){
           Element temp=heap[index];
            index=heap[2*index].data>heap[2*index+1].data?2*index:2*index+1;
            heap[index/2]=heap[index];

            heap[index]=temp;
           }else{
            break;
           }
    }

    return delE;
}
