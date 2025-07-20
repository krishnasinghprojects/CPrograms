#include <stdio.h>

int main()
{	
    int year;
    printf("Program To Find A Leap Year\n");
    printf("Enter The Year : ");
    scanf("%d",&year);
    if(year<0)
    {
        printf("Year Cannot Be Negative !");
    }
    else if(year%4==0)
    {
        printf("%d Year Is Leap Year",year);
    }
    else
    {
        printf("%d Year Is Not A Leap Year",year);
    }
    return 0;
}