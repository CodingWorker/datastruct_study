#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*动态内存分配*/

    //返回一个指针，执行分配空间大小的起始地址
    int *pi=(int *)malloc(sizeof(int)*10);
    int i=0;
    for(;i<10;i++){
        printf("pi+%d => %x\n",i,pi+i);
    }

    printf("pi + 10000 => %x\n",pi+10000);

    printf("//=====================\n");
    char *pc=(char *)malloc(sizeof(char)*10);
    for(i=0;i<10;i++){
        printf("pc+%d => %x\n",i,pc+i);
    }

    *(pi+2)=12;
    *pc='d';

    printf("*(pi+2) => %d, *p => %c\n",*(pi+2),*pc);

    //释放空间
    free(pi);
    free(pc);

    pi=(int *)malloc(sizeof(int)*2);
    printf("pi+2 => %x, *(pi+2) => %d, *p => %c\n",pi+2,*(pi+2),*pc);

    return 0;
}
