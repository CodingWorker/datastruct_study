#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_ROW 10
#define Max_COL 10

typedef struct{
    int v;
    int h;
} Direction;

void move(Direction);
int isFinish();

Direction move[8];
int mark[MAX_ROW][Max_COL];
int start_row=1;
int start_col=1;
int end_row=MAX_ROW;
int end_col=Max_COL;

int *pcurr_row;
int *pcurr_col;

int main()
{
    int maze[MAX_ROW+2][Max_COL+2];
    pcurr_row=&start_row;
    pcurr_col=&start_col;

    return 0;
}

void move(Direction dir){
    *pcurr_row+=dir.h;
    *pcurr_col+=dir.v;
    if(mark[*pcurr_row][*pcurr_col]){


    }
}

int isFinish(){
    if(*pcurr_row==end_row && *pcurr_col==end_col){
        return TRUE;
    }else{
        return FALSE;
    }
}


