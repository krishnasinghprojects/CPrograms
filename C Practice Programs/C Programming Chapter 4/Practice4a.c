#include <stdio.h>

int main()
{	
    int n=0, sum = 0, i = 1;
    while(n<=0)
    {
    printf("Enter The Value Of n To Add Natural Numbers: ");
    scanf("%d", &n);
    }
    do
    {
        sum += i;
        i++;
    }
    while (i <= n);
    printf("Sum Of n Natural Numbers: %d\n", sum);
    return 0;
}
