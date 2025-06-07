#include <stdio.h>

int main()
{	
    int number, isprime = 1,i=2;
    printf("Program To Check Whether The Number Is Prime Or Not\n");
    printf("Enter The Number: ");
    scanf("%d", &number);

    if (number <= 1) 
    {
    isprime = 0;
    }
    else 
    {
        do
        {
            if(number % i == 0)
            {
                isprime = 0;
                break;
            }
            i++;
        }
        while(i < number);
    }
    if(isprime)
        printf("The Number %d Is A Prime\n", number);
    else
        printf("The Number %d Is Not A Prime\n", number);

    return 0;
}
