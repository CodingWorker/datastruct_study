#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    /*
    printf("Hello world!\n");
    int a,*p;
    a=12;
    p=12;
    printf("%d",p);
    printf("\n%d",sizeof(*p));   //sizef���Եõ��������͵Ĵ洢����ռ�

    var arr=int[5][5];
    int index=0;
    while(1==1){
        arr[0][2]==NULL;
    }
    */
    clock_t start=clock();

    int i=0;
    while(1==1){
        i=i+1;
        i+'a';

        if(i==1000000){
            break;
        }
    }
    clock_t stop=clock();
    double diff=(double)(stop-start)/(CLK_TCK);
    printf("�����ʱ%d",diff);
    return 0;

}


