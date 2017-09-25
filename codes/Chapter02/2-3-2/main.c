#include <stdio.h>
#include <stdlib.h>

typedef struct{
    enum tag_field{
        male,female
    } sex;
    union{
        int children;
        int beard;
    } u;
} SexType;

typedef struct{
    int year;
    int month;
    int day;
} Birth;

typedef struct{
    char name[20];
    int age;
    int salary;
    Birth birth;
    SexType sex;
} Person;

int main()
{
    Person p1;
    p1.sex.sex=male;
    p1.sex.u.children=2;
}
