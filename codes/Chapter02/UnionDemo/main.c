#include <stdio.h>
#include <stdlib.h>

//������ʹ��nion���Σ����κ�ʱ�̹����������ֻ��һ������Ч��,����union�Ľṹ�����������
typedef struct{
    enum GenderType{
        //�����ֵ����ֱ��ʹ�ã�GenderType.MALE
        MALE,FEMALE
        } GenderType;
    union{
        //����ר��
        int beard;

        //Ů��ר��
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
    //����
    Human man;
    Gender gender;
    man.gender.GenderType=MALE;
    strcpy(man.name,"man");
    man.age=12;
    man.salary=123;
    man.gender.U.beard=12;

    //Ů��
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
    printf("GenderType:%s\n",man.gender.GenderType==0?"��":"Ů");
    printf("beard:%d\n",man.gender.U.beard);

    printf("//========================\n");

    printf("woman:\n");
    printf("name:%s\n",woman.name);
    printf("age:%d\n",woman.age);
    printf("salary:%d\n",woman.salary);
    printf("GenderType:%s\n",woman.gender.GenderType==0?"��":"Ů");
    printf("children:%d\n",woman.gender.U.children);
    printf("beard:%d\n",woman.gender.U.beard);

    return 0;
}
