#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char key[2];
} Element;
int main()
{
    int *p;
    if(p==NULL){
        printf("0");
    }else{
        printf("1");
    }

    int arr[20];
    if(arr[1]==NULL){
        printf("00");
    }else{
        printf("11");
    }
    printf("arr[1] = %d\n",arr[1]);

    return 0;
}
