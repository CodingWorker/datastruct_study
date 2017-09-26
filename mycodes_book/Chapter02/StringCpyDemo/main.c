#include <stdio.h>
#include <stdlib.h>

int main()
{
    //声明时的变量分配内存时可能挨着
   char s[10]={"dogs"};
   char t[10]={"house"};

    char *ps=s;

   printf("strcat(s,t) = %s\n",strcat(s,t));
   printf("s = %s\n",s);
   printf("t = %s\n",t);

   printf("&s = %x\n",s);
   printf("&s = %x\n",s+1);
   printf("%c\n",*(s+1));
   char ss[10]={"start"};
   strcat(ss,ps+1);
   printf("%s\n",ss);
   printf("%c\n",*ps);
   strcpy(ss,ps+1);
   printf("%s",ss);


}
