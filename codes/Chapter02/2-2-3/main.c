#include <stdio.h>
#include <stdlib.h>

//��������͵Ľṹ
typedef struct{
    char name[20];
    int age;
    float salary;
} Person;//��β�ķֺŲ�����,��ǰ������ֻ֧�ֽ�������д�ڽ�β����֧��д�ڿ�ͷ

int main()
{
    Person p,p1;
    strcpy(p.name,"c");
    p.age=12;
    p.salary=1234.11;

    printf("Person-p=>name=%s, age=%d, salary=%d\n",p.name,p.age,p.salary);

    p1=p; //֧�ֽ�һ���ṹ���򶼸�ֵ����һ��ͬ���͵Ľṹ
    printf("Person-p=>name=%s, age=%d, salary=%d",p1.name,p1.age,p1.salary);
}
