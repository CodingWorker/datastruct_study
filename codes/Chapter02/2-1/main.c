#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
float sum(float [],int);   //����������ʱ����Բ�ָ���βε����ƣ������ڶ����ʱ����Ҫ
float input[MAX_SIZE],answer;
int i;
void main()
{
    for(i=0;i<MAX_SIZE;i++)
        input[i]=i;

    answer=sum(input,MAX_SIZE);   //c��������������ݵ�������ĵ�ַ������һ��Ԫ�صĵ�ַ
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
