#include <stdio.h>
int main(int argc, char const *argb[])
{
    struct date {
        int month;
        int day;
        int year;
    };
    struct date today={10,20,2019};

    struct date thisday;
    thisday = today;
    thisday.year = 9999;
    
    struct date newday = {.month=7,.year=2014};

    struct date *p = &newday;
    printf("newday's year %d \n",p->year);
    printf("Today's date is %i-%i-%i. \n",today.year,today.month,today.day);

    printf("thisdoday's date is %i-%i-%i. \n",thisday.year,thisday.month,thisday.day);
    printf("newdoday's date is %i-%i-%i. \n",newday.year,newday.month,newday.day);

    return 0;
}
