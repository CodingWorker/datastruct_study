#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

void printArr(int *ptr,int rows);

int main()
{
    int list[ARRAY_SIZE],*plist[ARRAY_SIZE];
    int i=0;
    for(;i<ARRAY_SIZE;i++){
        list[i]=2*i+1;
        plist[i]=list[i];
        printf("item %d=>address:%d, value:%d\n",i,plist+i,*(plist+i));
    }
    printf("//==================\n");
    printArr(plist,ARRAY_SIZE);
}

void printArr(int *ptr,int rows){
    int i=0;
    for(;i<rows;i++){
        printf("item %d=>address:%d, value:%d\n",i,ptr+i,*(ptr+i));

    }
}
