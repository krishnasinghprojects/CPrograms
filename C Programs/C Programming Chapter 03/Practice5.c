#include <stdio.h>

int main()
{	
    int number1,number2,number3,number4,largest=0;
    printf("Program to find largest of 4 numbers\n");
    printf("Enter Number 1 : ");
    scanf("%d",&number1);
    printf("Enter Number 2 : ");
    scanf("%d",&number2);
    printf("Enter Number 3 : ");
    scanf("%d",&number3);
    printf("Enter Number 4 : ");
    scanf("%d",&number4);
    if(number1>largest)
    {
        largest=number1;
    }
    if(number2>largest)
    {
        largest=number2;
    }
    if(number3>largest)
    {
        largest=number3;
    }
    if(number4>largest)
    {
        largest=number4;
    }

    printf("%d Is The Largest Number",largest);
    return 0;
}