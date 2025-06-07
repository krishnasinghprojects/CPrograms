#include <stdio.h>
int sum(int n)
{
    if(n==1)
    {
        return n;
    }
    return sum(n-1)+n;
}
int main()
{	
    int n;
    printf("Enter The Number Of Elements : ");
    scanf("%d",&n);
    printf("Sum Of First %d Natural Numbers : %d",n,sum(n));
    return 0;
}