#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int year;
    int month;
    int day;
} Date;

typedef struct{
    Date date;

    int hour;
    int minute;
    int second;
} Time;


int main()
{
    Time time;
    time.date.year=2017;
    time.date.month=3;
    time.date.day=1;

    time.hour=12;


    return 0;
}
