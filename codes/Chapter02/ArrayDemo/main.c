#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int main()
{
   /**
   * 声明一个整数数组
   * 声明一个指向整数的指针数组
   */
   int list[ARRAY_SIZE],*plist[ARRAY_SIZE];
   int i,j;
   for(i=0;i<5;i++){
        list[i]=2*i;

        // 基址是275224，则plist[0]为275224，
        // plist[1]=275224+1*sizeof(int),其他依次类推
        plist[i]=&list[i];
   }

   for(j=0;j<5;j++){
        printf("list[%d] = %d\n",j,list[j]);
        printf("plist[%d] = %d\n",j,*plist[j]);
        printf("list[%d] = %d\n",list+j,*(list+j));
   }

    return 0;
}
