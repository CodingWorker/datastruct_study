#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR_SIZE 10
#define MAX_HASH_SIZE 100
typedef struct {
    char data[MAX_CHAR_SIZE];
} Element;

void initTable(Element[]);
int transform(char *);
int hash(char []);

Element hashTable[MAX_HASH_SIZE];
int top=-1;

int main()
{
    //初始化散列表，以使得槽均为空
    initTable(hashTable);
    Element e1;
    strcpy(e1.data,"a1");
    int hash1=hash("item1");
    hashTable[hash1]=e1;

    Element e2;
    strcpy(e2.data,"adc");
    int hash2=hash("item2");
    hashTable[hash2]=e2;

    Element e3;
    strcpy(e3.data,"acw");
    int hash3=hash("item3");
    hashTable[hash3]=e3;

    int i=0;
    for(;i<MAX_HASH_SIZE;i++){
        if(hashTable[i].data[0]){
            printf("hashTable[%d]:data => %s\n",i,hashTable[i].data);
        }
    }

    int hash0=hash("item1");
    printf("item: data => %s\n",hashTable[hash0].data);

    printf("%d\n",211%13);
    return 0;
}

void initTable(Element hash[]){
    int i=0;
    for(;i<MAX_HASH_SIZE;){
        hash[i++].data[0]=NULL;
    }
}

int hash(char *key){
    return (transform(key)%MAX_HASH_SIZE);
}

int transform(char *key){
    if(!(*key)){
        return NULL;
    }

    int sum=0;
    while(*key){
        sum+=*key++;
    }

    return sum;
}
