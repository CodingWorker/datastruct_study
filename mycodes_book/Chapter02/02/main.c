#include <stdio.h>
#include <stdlib.h>

int main()
{
typedef struct person{
    char name[10];
    int age;
    float salary;
};

//定义一个结构
typedef struct human_being{
    char name[10];
    int age;
    int salary;
};

    person p;
    //strcpy(p.name,"james");
    p.age=12;
    p.salary=123;

    human_being p1,p2;
    p1.name="p1";
    p2.name="p2";
    if(strcmp(p1.name,p2.name)){
        printf("same");
    }else{
        printf("different");
    }


}


