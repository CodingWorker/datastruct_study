#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 3

typedef struct{
    char key[20];
} Element;

void IsFull(int);
void IsEmpty(int, int);
void addQ(int *, Element);
Element deleteQ(int *,int);

void queue_full();
void queue_empty();

Element queue[MAX_QUEUE_SIZE];
int front =-1;
int reqr=-1;
int main()
{

    return 0;
}

void IsFull(int rear){
    if(rear>=MAX_QUEUE_SIZE-1){
        queue_full();
    }
}

void IsEmpty(int front,int rear){
    if(front==rear){
        queue_empty();
    }
}

void addQ(int *rear, Element e){
    if(*rear<MAX_QUEUE_SIZE-1){
        queue[++*rear]=e;
    }else{
        printf("Error\n");
        queue_full();
    }
}

Element deleteQ(int *front, int rear){
    if(*front==rear){
        printf("Error\n");
        queue_empty();
    }else{
        return queue[++*front];
    }
}

void queue_full(){
}
void queue_empty(){}
