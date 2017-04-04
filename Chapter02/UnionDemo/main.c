#include <stdio.h>
#include <stdlib.h>

//共用体使用nion修饰，在任何时刻共用体里的域只有一个是有效的,包含union的结构体叫做共用体
typedef struct{
    enum GenderType{
        //这里的值可以直接使用，GenderType.MALE
        MALE,FEMALE
        } GenderType;
    union{
        //男人专属
        int beard;

        //女人专属
        int children;
    } U;
} Gender;

typedef struct{
    int year;
    int month;
    int day;
} Date;

typedef struct{
    char name[20];
    int age;
    int salary;
    Date birthday;

    Gender gender;
} Human;

int main()
{
    //男人
    Human man;
    Gender gender;
    man.gender.GenderType=MALE;
    strcpy(man.name,"man");
    man.age=12;
    man.salary=123;
    man.gender.U.beard=12;

    //女人
    Human woman;
    woman.gender.GenderType=FEMALE;
    strcpy(woman.name,"woman");
    woman.age=12;
    woman.salary=15;
    woman.gender.U.children=2;
    woman.gender.U.beard=10;

    printf("man:\n");
    printf("name:%s\n",man.name);
    printf("age:%d\n",man.age);
    printf("salary:%d\n",man.salary);
    printf("GenderType:%s\n",man.gender.GenderType==0?"男":"女");
    printf("beard:%d\n",man.gender.U.beard);

    printf("//========================\n");

    printf("woman:\n");
    printf("name:%s\n",woman.name);
    printf("age:%d\n",woman.age);
    printf("salary:%d\n",woman.salary);
    printf("GenderType:%s\n",woman.gender.GenderType==0?"男":"女");
    printf("children:%d\n",woman.gender.U.children);
    printf("beard:%d\n",woman.gender.U.beard);

    return 0;
}
