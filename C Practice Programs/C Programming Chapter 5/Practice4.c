#include <stdio.h>
int series(int n)
{
    if(n==1 || n==2)
    {
        return n-1;
    }
    return (series(n-1)+series(n-2));
}
int main()
{	
int n;
printf("Enter The Number Of Element : ");
scanf("%d",&n);
printf("%d",series(n));
    return 0;
}