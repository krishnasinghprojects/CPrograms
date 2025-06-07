#include <stdio.h>
typedef struct dates
{
    int day,month,year;
}dates;
dates compare(dates date1,dates date2)
{
    if(date1.day==date2.day && date1.month==date2.month && date1.year==date2.year)
    {
        printf("DATES ARE SAME !");
    }
    else
    {
        printf("DATES ARE DIFFERENT !");
    }
}

int main()
{	
    dates date1,date2;
    date1.day=28;
    date1.month=10;
    date1.year=2007;
    date2.day=28;
    date2.month=10;
    date2.year=2007;
    compare(date1,date2);
    return 0;
}