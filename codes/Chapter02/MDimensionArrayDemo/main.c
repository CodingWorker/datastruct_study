#include <stdio.h>
#include <stdlib.h>

#define MAX_ROW 5
#define MAX_COL 5

int main()
{
    int list[MAX_ROW][MAX_COL];
    int *plist;

    int i,j;
    for(i=0;i<MAX_ROW;i++){
        for(j=0;j<MAX_COL;j++){
            list[i][j]=2*i+3*j+1;
        }
    }

    plist=&list;

    //数组的地址
    printf("&list => %x\n",&list);
    printf("&list[0][0] => %x\n",&list[0][0]);
    printf("plist => %x\n",plist);

    //访问数组第一行的第三个元素
    printf("访问数组第一行的第三个元素\n");
    printf("list[0][2] = %d\n",list[0][2]);
    printf("*(&list[0][0]+2) = %d\n",*(&list[0][0]+2));
    printf("*(plist+2) = %d\n",*(plist+2));

    //访问数组的第三行第2个元素
    printf("数组的第三行第2个元素\n");
    printf("list[2][1] = %d\n",list[2][1]);
    printf("*(&list[0][0] + 2*Col+1) = %d\n",*(&list[0][0]+2*MAX_COL+1));
    printf("*(plist+2*Col+1) = %d\n",*(plist+2*MAX_COL+1));

    return 0;
}
