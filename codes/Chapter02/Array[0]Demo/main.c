#include <stdio.h>
#include <stdlib.h>

int main()
{
    //�����±�Ϊ0��Ԫ�صĵ�ַ��������ĵ�ַ
    int list[5];
    printf("&list[0] = %x\n",&list[0]);
    printf("&list = %x\n",&list);

    //���Ը�ֵָ���ʱ��
    int *plist;

    //ָ��ָ������
    plist=&list;

    //Ҳ����
    //plist=&list[0];

    printf("plist = %x\n",plist);





    return 0;
}
