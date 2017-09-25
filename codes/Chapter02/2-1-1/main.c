#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5
void change(int[]);

int main()
{
    int list[5];
    int i,j,k;
    for(i=0;i<ARRAY_SIZE;i++){
        list[i]=2*i+1;
    }
    printf("before call change:\n");

    for(j=0;j<ARRAY_SIZE;j++){
        printf("list[%d] = %d\n",j,list[j]);
    }
    change(list);
    printf("//=================\nafter call change:\n");

    for(k=0;k<ARRAY_SIZE;k++){
        printf("list[%d] = %d\n",k,list[k]);
    }
}

void change(int li[]){
    int i=0;
    for(;i<ARRAY_SIZE;i++){
        li[i]=li[i]*3+2;
    }

}
