#include <stdio.h>
#include <stdlib.h>
//print1(int*,int);
int main()
{
    int one[]={1,2,3,4,5};
    print1(one,5);
    int two=12;
    changeValue(&two);
    printf("%8u%5d\n",&two,two);

    int three=11;
    changeVal(three);
    printf("%8u%5d\n",&three,three);
}
void changeVal(int c){
    c=100;
    printf("%8u%5d\n",&c,c);
}

void changeValue(int *ptr){
    *ptr=10;
    printf("%8u%5d\n",ptr,*ptr);
}

void print1(int *ptr,int rows){
    int i;
    printf("Address Content\n");
    for(i=0;i<rows;i++){
        printf("%8u%5d\n",ptr+i,*(ptr+i));   //地址值之间相差4，表示int是4个字节，而且地址值是连续的
    }

    printf("\n");
}
