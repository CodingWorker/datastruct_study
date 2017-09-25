#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");

    //声明数组,c语言没有ew操作符所以声明时指定数组的容量
    int list[5],*plist[5];  //声明一个容量为5的整型数组和一个指向整型的指针
    //list[0]-list[4]的每个元素斗殴包含了一个整数值
    //plist[0]-plist[4]的每个元素都包含了一个指向整型的指针

    list[0]=1;
    list[1]=2;

    plist[0]=11;
    plist[1]=12;


    return 0;
}
