#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ָ���ǿ������ת��
    int *pi;
    pi=malloc(sizeof(int));

    int *pf;
    pf=(float *)pi;

    printf("pi => %x\n",pi);
    printf("pf => %x\n",pf);

    *pi=12;
    printf("*pi => %d\n",*pi);
    printf("*pf => %d\n",*pf);

    *pf=23.12;
    printf("*pf => %d\n",*pf);
    return 0;
}
