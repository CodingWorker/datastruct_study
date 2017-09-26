#include <stdio.h>
#include <stdlib.h>

//Ƕ�׽ṹ
typedef struct {
    int year;
    int month;
    int day;
} Birth;

typedef struct {
    char name[20];
    int age;
    Birth birth;
    float salary;
} Person;

int main()
{
    Person p;
    strcpy(p.name,"fa");
    p.age=12;
    p.birth.year=2000;
    p.birth.month=6;
    p.birth.day=1;
    p.salary=1234.12;
}
