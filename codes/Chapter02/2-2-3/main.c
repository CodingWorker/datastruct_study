#include <stdio.h>
#include <stdlib.h>

//定义带类型的结构
typedef struct{
    char name[20];
    int age;
    float salary;
} Person;//结尾的分号不能少,当前编译器只支持将类型名写在结尾，不支持写在开头

int main()
{
    Person p,p1;
    strcpy(p.name,"c");
    p.age=12;
    p.salary=1234.11;

    printf("Person-p=>name=%s, age=%d, salary=%d\n",p.name,p.age,p.salary);

    p1=p; //支持将一个结构的域都赋值给另一个同类型的结构
    printf("Person-p=>name=%s, age=%d, salary=%d",p1.name,p1.age,p1.salary);
}
