#include <stdio.h>
float CtoF(int celcius)
{
    return (celcius*9.0/5.0)+32.0;
}
float FtoC(int fahrenheit)
{
    return (fahrenheit-32.0)*5.0/9.0;
}
int main()
{	
    int temperature,selection;
    printf("Enter The Temperature : ");
    scanf("%d",&temperature);
    printf("Celcius To Fahrenheit : PRESS 1\n");
    printf("Fahrenheit To Celcius : PRESS 2\n");
    printf("Selection : ");
    scanf("%d",&selection);
    if(selection==1)
    {
        printf("Temperature in Fahrenheit : %f",CtoF(temperature));
    }
    else if (selection==2)
    {
        printf("Temperature in Celius : %f",FtoC(temperature));
    }
    else
    {
    printf("INVALID SELECTION !");
    }
    return 0;
}