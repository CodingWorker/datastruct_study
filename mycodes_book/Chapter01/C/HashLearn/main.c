#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 10
#define TABLE_SIZE 13

typedef struct{
    char key[MAX_CHAR];
} element;

main()
{
    printf("Hello world!\n");
    element hash_table[TABLE_SIZE];
    init_table(hash_table);
    printf("%c",hash_table[0].key[1]);
    int cc=hash("for");
    printf("%d",cc);

    //return 0;
}


/**
*   散列函数构造
*/
int transform(char *key){
    int number=0;
    while(*key){
        number+=*key++;
    }

    return number;
}

/**
*   质数取余法
*/
int hash(char *key){
    return (transform(key)%TABLE_SIZE);
}

/**
 *  初始化散列ADT
*/
void init_table(element ht[]){
    int i;
    for(i=0;i<TABLE_SIZE;i++){
        ht[i].key[0]='a';
        ht[i].key[1]='c';
    }
}
