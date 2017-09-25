#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5
int *getIntArr();
int *getIntPointerArr();
void print1(int[]);
void print2(int *);

int main()
{
    /**
    * 写出一个函数，这个函数输出数组的第i个元素的地址及其对应的值
    */

    //int list[]=getIntArr();
    int *plist=getIntPointerArr();

    //纯数组实现
    //print1(list);

    //指针数组实现
    print2(plist);
}
/*
int[] getIntArr(){
    int a[ARRAY_SIZE];
    int i=0;
    for(;i<ARRAY_SIZE;i++){
        a[i]=2*i+1;
    }

    return a;
}
*/
int *getIntPointerArr(){
    int *pa[ARRAY_SIZE];
    int i=0;
    for(;i<ARRAY_SIZE;i++){
        *pa[i]=3*i+2;
    }

    return *pa;
}

/*
void print(int a[]){
    int i=0;
    for(;i<ARRAY_SIZE;i++){
        printf("item[%d]=>address:%d, value:%d\n",i,&a[i],a[i]);
    }
}
*/

void print2(int *a){
    int i=0;
    for(;i<ARRAY_SIZE;i++){
        //printf("item[%d]=>address:%d, value:%d\n",i,a[i],a[i]);
    }
}
