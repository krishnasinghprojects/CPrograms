#include <stdio.h>

int main()
{	
    int n=0, sum = 0;
    while(n<=0)
    {
    printf("Enter The Value Of n To Add Natural Numbers: ");
    scanf("%d", &n);
    }
    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("Sum Of n Natural Numbers: %d\n", sum);
    return 0;
}
