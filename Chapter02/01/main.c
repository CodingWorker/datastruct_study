#include <stdio.h>
#include <stdlib.h>

void changeValue(int arr[]);
int main()
{
    printf("Hello world!\n");
    //定义一个整型数组和一个指向整型的指针数组
    int list[10],*plist[10];

    /*
    *   debug可以看出来在初始化数组之前会为它们随机分配初始值，因此每次运行值都不一样
    */

    //初始化
    list[0]=1;   //值为1
    list[1]=2;

    plist[0]=11;  //指向的地址空间为
    plist[1]=12;  //指向的地址空间为

    changeValue(list);
    changeValue(plist);

    printf("list[0] : %d\n",list[0]);
    printf("plist[1] : %d\n",plist[1]);
    printf("list[2] : %d",list[2]);


    return 0;
}

void changeValue(int arr[]){
    arr[0]=1^2;
    arr[1]=2^2;
    arr[3]=3^2;
}
