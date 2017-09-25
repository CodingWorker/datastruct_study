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

    printf("//======new heap=====\n");
    Element newE;
    newE.data=234;
    insertMaxHeap(newE,&top);

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

Element cteate(int data){
    Element e;
    e.data=data;

    return e;
}
