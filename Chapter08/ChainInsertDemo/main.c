#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_HASH_SIZE 100
#define MAX_CHAR_SIZE 10

typedef struct Element{
    char key[MAX_CHAR_SIZE];
} Element;

typedef struct ListNode *PListNode;
typedef struct ListNode{
    char key[MAX_CHAR_SIZE];
    PListNode link;
} ListNode;

void initHashTable(Element *);
void printHashTable(Element *);
int chainInsert(char *,Element);
int hash(char *);

Element hashTable[MAX_HASH_SIZE];
PListNode plist[MAX_HASH_SIZE];

int main()
{
    initHashTable(hashTable);
    return 0;
}

void initHashTable(Element *ptr){
    while(ptr){
        (*(ptr++)).key[0]=NULL;
    }
}

void printHashTable(Element *ptr){
    if(!ptr){
        printf("Error: hash table is empty\n");
        return;
    }

    int i=0;
    for(;i<MAX_HASH_SIZE;){
        if((*ptr).key[0]){
            printf("hashTable[%d]: key => %s\n",i,(*(ptr+i)).key);
        }
        i++;
    }
}

int chainInsert(char *key,Element e){
    if(!(*key)[0]){
        printf("the key can not be null\n");
        return;
    }

    int hashV=hash(key);
    if(!plist[hashV]){
        plist[hashV]=(PListNode)malloc(sizeof(ListNode));
    }

    PListNode ptr=plist[hashV];
    while(ptr->link){
        if(ptr->link->key==*key){
            printf("Error:the key is in the hashTable,can not insert");
            return FALSE;
        }
        ptr=ptr->link;
    }

    PListNode node=(PListNode)malloc(sizeof(ListNode));
    node->key=*key;
    ptr->link=node;

    //º”»ÎµΩhashTable
}

int hash(char *key){
    int sum=i=0;
    while((*key)[0]){
        sum+=*(key++);
    }

    return sum%MAX_HASH_SIZE;
}
