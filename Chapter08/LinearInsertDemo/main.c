#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_CHAR_SIZE 10
#define MAX_HASH_SIZE 100
typedef struct {
    char data[MAX_CHAR_SIZE];
} Element;

void initTable(Element[]);
int transform(char *);
int hash(char []);
int insert(char *,Element);

Element hashTable[MAX_HASH_SIZE];

int main()
{
    //��ʼ��ɢ�б���ʹ�ò۾�Ϊ��
    initTable(hashTable);
    Element e1;
    strcpy(e1.data,"a1");
    if(insert("item1",e1)){
        printf("item1 => %s ����ɹ�\n",e1.data);
    }else{
        printf("item1 => %s ����ɹ�\n",e1.data);
    }

    Element e2;
    strcpy(e2.data,"adc");
    if(insert("item2",e2)){
        printf("item2 => %s ����ɹ�\n",e2.data);
    }else{
        printf("item2 => %s ����ɹ�\n",e2.data);
    }

    Element e3;
    strcpy(e3.data,"acw");
    if(insert("item3",e3)){
        printf("item3 => %s ����ɹ�\n",e3.data);
    }else{
        printf("item3 => %s ����ɹ�\n",e3.data);
    }

    Element e4;
    strcpy(e4.data,"acw");
    if(insert("item4",e3)){
        printf("item4 => %s ����ɹ�\n",e3.data);
    }else{
        printf("item4 => %s ����ɹ�\n",e3.data);
    }

    printf("//========���======\n");
    int i=0;
    for(;i<MAX_HASH_SIZE;i++){
        if(hashTable[i].data[0]){
            printf("hashTable[%d]:data => %s\n",i,hashTable[i].data);
        }
    }

    int hash0=hash("item1");
    printf("item: data => %s\n",hashTable[hash0].data);

    return 0;
}

void initTable(Element hash[]){
    int i=0;
    for(;i<MAX_HASH_SIZE;){
        hash[i++].data[0]=NULL;
    }
}

int insert(char *key,Element e){
    if(!key){
        printf("Error:illegal key");
        return FALSE;
    }

    int hashKey=hash(key);
    if(hashTable[hashKey].data==e.data){
        printf("Error:�ظ�key");
        return FALSE;
    }

    //����һ����ʼ̽��
    int i=1;
    while(hashTable[(hashKey+i)/MAX_HASH_SIZE].data[0]){
        if(hashTable[(hashKey+i)/MAX_HASH_SIZE].data==e.data){
            printf("Error���ظ�key");
            return FALSE;
        }
        if(i==MAX_HASH_SIZE){//Ҳ����ֱ��������exit
            break;
        }
        i++;
    }


    if(i==MAX_HASH_SIZE){
        return FALSE;
    }

    hashTable[hashKey+i]=e;
    return TRUE;
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
