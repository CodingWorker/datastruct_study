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
    * д��һ����������������������ĵ�i��Ԫ�صĵ�ַ�����Ӧ��ֵ
    */

    //int list[]=getIntArr();
    int *plist=getIntPointerArr();

    //������ʵ��
    //print1(list);

    //ָ������ʵ��
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
