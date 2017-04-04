#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

//声明一个函数检验结构体之间是否相等
int human_eaual(human,human);

//定义一个结构变量，无类型
struct {
    char name[20];
    int age;
    double salary;
} person;

//定义一个结构变量类型。类型为human
typedef struct{
    char name[20];
    int age;
    double salary;
} human;

int main()
{
    strcpy(person.name,"my struct");
    person.age=12;
    person.salary=12.23;

    printf("person.name:%s\n",person.name);
    printf("person.age:%d\n",person.age);
    printf("person.salary:%f\n",person.salary);

    printf("//=====================\n");

    human p[3];

    strcpy(p[0].name,"my second struct");
    p[0].age=12;
    p[0].salary=123.12;
    printf("p[0].name:%s\n",p[0].name);
    printf("p[0].age:%d\n",p[0].age);
    printf("p[0].salary:%f\n",p[0].salary);

    printf("//=====================\n");

    printf("&p[0].name => %x\n",&p[0].name);
    printf("&p[0].age => %x\n",&p[0].age);
    printf("&p[0].salary => %x\n",&p[0].salary);

    printf("//=====================\n");

    //结构寻址：->
    human *pp;
    pp=&p;

    printf("p[0].name:%x\n",pp->name);
    printf("p[0].age:%x\n",pp->age);
    printf("p[0].salary:%x\n",pp->salary);

    printf("//=====================\n");

    printf("p[0].name:%s\n",p[0].name);
    printf("p[0].age:%d\n",p[0].age);
    //printf("p[0].salary:%x\n",*pp->salary);

    human p2;
    strcpy(p2.name,"c");
    p2.age=11;
    p2.salary=12;
    if(human_eaual(p[0],p2)){
        printf("equals");
    }else{
        printf("not equals");
    }


    return 0;
}

int human_eaual(human p1,human p2){
    if(strcasecmp(p1.name,p2.name)){
        return FALSE;
    }

    if(p1.age!=p2.age){
        return FALSE;
    }

    if(p1.salary!=p2.salary){
        return FALSE;
    }

    return TRUE;
}
