#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int main()
{
   /**
   * ����һ����������
   * ����һ��ָ��������ָ������
   */
   int list[ARRAY_SIZE],*plist[ARRAY_SIZE];
   int i,j;
   for(i=0;i<5;i++){
        list[i]=2*i;

        // ��ַ��275224����plist[0]Ϊ275224��
        // plist[1]=275224+1*sizeof(int),������������
        plist[i]=&list[i];
   }

   for(j=0;j<5;j++){
        printf("list[%d] = %d\n",j,list[j]);
        printf("plist[%d] = %d\n",j,*plist[j]);
        printf("list[%d] = %d\n",list+j,*(list+j));
   }

    return 0;
}
