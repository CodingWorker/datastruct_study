#include <stdio.h>
#include <stdlib.h>

void changeValue(int arr[]);
int main()
{
    printf("Hello world!\n");
    //����һ�����������һ��ָ�����͵�ָ������
    int list[10],*plist[10];

    /*
    *   debug���Կ������ڳ�ʼ������֮ǰ��Ϊ������������ʼֵ�����ÿ������ֵ����һ��
    */

    //��ʼ��
    list[0]=1;   //ֵΪ1
    list[1]=2;

    plist[0]=11;  //ָ��ĵ�ַ�ռ�Ϊ
    plist[1]=12;  //ָ��ĵ�ַ�ռ�Ϊ

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
