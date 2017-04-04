#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
int person_equals(Person,Person);

typedef struct{
    char name[20];
    int age;
    float salary;
} Person;

int person_equals(Person p1,Person p2){
    printf("%d\n",strcmp(p1.name,p2.name));
    //strcpy(p2.name,"ff");
    printf("p1.name=%s\n",p1.name);
    printf("p2.name=%s\n",p2.name);
    printf("%d\n",p1.age==p2.age);
    printf("%d\n",p1.salary==p2.salary);

    return (p1.name==p2.name && p1.age==p2.age && p1.salary==p2.salary)? TRUE:FALSE;
}


int main()
{
    Person p1,p2;
    strcpy(p1.name,"fa");
    p1.age=12;
    p1.salary=1234.12;
    p2=p1;

    printf("p1==p2? %d",person_equals(p1,p2));

}
