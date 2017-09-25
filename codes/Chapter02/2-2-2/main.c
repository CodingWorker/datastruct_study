#include <stdio.h>
#include <stdlib.h>

struct {
    char name[20];
    int age;
    float salary;
} person;

int main()
{
    strcpy(person.name,"fafa");
    person.age=12;
    person.salary=1234.12;
    printf("Person=>name:%s, age:%d, salary:%f",person.name,person.age,person.salary);
}
