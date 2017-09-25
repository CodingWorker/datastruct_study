#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
float sum(float [],int);   //函数声明的时候可以不指定形参的名称，但是在定义的时候需要
float input[MAX_SIZE],answer;
int i;
void main()
{
    for(i=0;i<MAX_SIZE;i++)
        input[i]=i;

    answer=sum(input,MAX_SIZE);   //c语言数组参数传递的是数组的地址，即第一个元素的地址
    printf("The sum is: %f\n",answer);
}

float sum(float plist[],int n){
    int i;
    float tempsum=0;
    for(i=0;i<n;i++){
        tempsum+=plist[i];
    }

    return tempsum;
}
