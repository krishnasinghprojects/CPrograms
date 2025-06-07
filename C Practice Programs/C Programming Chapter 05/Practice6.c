#include <stdio.h>
int pattern(int n)
{
    if(n==1)
    {
        printf("*\n");
        return n;
    }
    else if(n==2)
    {
        printf("**\n");
        return n;
    }
for(int i=n; i>0; i--)
{
    printf("*");
}
printf("\n");
return pattern(n-2);
}
int main()
{	
    int n;
    printf("Enter The Number Of Elements : ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}