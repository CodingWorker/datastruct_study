#include <stdio.h>
#include <stdlib.h>

int main()
{
    //数组下标为0的元素的地址就是数组的地址
    int list[5];
    printf("&list[0] = %x\n",&list[0]);
    printf("&list = %x\n",&list);

    //所以赋值指针的时候
    int *plist;

    //指针指向数组
    plist=&list;

    //也可以
    //plist=&list[0];

    printf("plist = %x\n",plist);





    return 0;
}
