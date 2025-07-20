#include <stdio.h>

int main()
{	
    int number,factorial=1;
    printf("Enter The Number To Find Its Factorial : ");
    scanf("%d",&number);
    for (int i = number; i > 1; i--)
    {
        factorial=factorial*i;
    }
    printf("Factorial : %d",factorial);
    return 0;
}