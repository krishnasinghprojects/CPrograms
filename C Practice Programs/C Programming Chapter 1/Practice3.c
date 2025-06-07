#include <stdio.h>

int main()
{	
    float temperatureC;
    printf("Enter The Temperature In Celsius :");
    scanf("%f",&temperatureC);
    float temperatureF=(temperatureC*9)/5+32;
    printf("The Temperature In Fahrenheit is : %f",temperatureF);
    return 0;
}