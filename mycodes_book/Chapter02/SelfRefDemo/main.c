#include <stdio.h>
#include <stdlib.h>

//�����ýṹָ�ṹ��ĳЩ�������������ָ�룬��Ҫ��̬�Ĵ洢���ͷ��ڴ�
typedef struct Link{
    char data;
    //link��ֵҪô��NULL��Ҫô��Linkʵ�������ĵ�ַ
    Link *link;
} ;

int main()
{
    Link l1,l2,l3;
    l1.data='a';
    l2.data='b';
    l3.data='c';

    l1.link=&l2;
    l2.link=&l3;
    l3.link=NULL;

    return 0;
}
