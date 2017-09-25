#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int year;
    int month;
    int day;
} Date;

typedef struct {
    char name[20];
    int age;
    double salary;

    Date birth;
} Person;

int main()
{
    Person p1, p2;
    Person *pp1, *pp2;

    strcpy(p1.name,"person1");
    p1.age=10;
    p1.salary=12.1;
    p1.birth.year=2000;
    p1.birth.month=10;
    p1.birth.day=12;

    pp1=&p1;

    strcpy(p2.name,"person2");
    p2.age=12;
    p2.salary=15.1;
    p2.birth.year=2000;
    p2.birth.month=10;
    p2.birth.day=15;

    pp2=&p2;

    printf("p1.name:%s\n",p1.name);
    printf("p1.age:%d\n",p1.age);
    printf("p1.salary:%f\n",p1.salary);
    printf("p1.birth.year:%d\n",p1.birth.year);
    printf("p1.birth.month:%d\n",p1.birth.month);
    printf("p1.birth.day:%d\n",p1.birth.day);

    printf("&p1 => %x\n",&p1);
    printf("pp1 => %x\n",pp1);

    printf("Ê¹ÓÃÖ¸Õë\n");
    printf("p1.name:address => %x\t value => %s\n",pp1->name,pp1->name);
    printf("p1.age:address => %x\t value => %d\n",&pp1->age,pp1->age);
    printf("p1.salary:address => %x\t value => %f\n",&pp1->salary,pp1->salary);
    printf("p1.birth.year:%d\n",pp1->birth.year);
    printf("p1.birth.month:%d\n",pp1->birth.month);
    printf("p1.birth.day:%d\n",pp1->birth.day);

    printf("//=================\n");

    printf("p2.name:%s\n",p2.name);
    printf("p2.age:%d\n",p2.age);
    printf("p2.salary:%f\n",p2.salary);

    printf("&p2 => %x\n",&p2);
    printf("pp2 => %x\n",pp2);


    return 0;
}
