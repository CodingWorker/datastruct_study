#include <stdio.h>
#include <stdlib.h>

//自引用结构指结构的某些域是引用自身的指针，需要动态的存储和释放内存
typedef struct Link{
    char data;
    //link的值要么是NULL，要么是Link实例变量的地址
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
