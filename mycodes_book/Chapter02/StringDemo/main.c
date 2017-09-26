#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main()
{
    char s[MAX_SIZE]={"dog"};
    printf("s = %s\n",s);

    //strcpy返回复制后的结果
    printf("s = %s\n",strcpy(s,"strcpy返回复制后的结果"));
    printf("size of s is %d\n",strlen(s));
    char *pos=strchr(s,(int)('r'));
    printf("the first r at %x\n",pos);
    printf("the next 1 char of r is %c\n",*(pos+1));
    printf("the next 2 char of r is %c\n",*(pos+2));

    printf("the second char is %c\n",*(s+1));    //
    printf("the third char is %c\n",*(s+2));
    return 0;
}
