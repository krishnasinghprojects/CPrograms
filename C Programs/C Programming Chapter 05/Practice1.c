#include <stdio.h>
float average(int a, int b, int c);
float average(int a, int b, int c)
    {
        float average=(a+b+c)/3.0;
        return average;
    }
int main()
{	
    int num1,num2,num3;
    printf("Enter Three Numbers To Get Their Average :\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    float avg=average(num1,num2,num3);
    printf("Average : %f",avg);
    return 0;
}