#include <stdio.h>
int tentimes(int* adress)
{
    *adress=*adress*10;
    return 0;
}
int main()
{	
    int num;
    printf("Enter A Number : ");
    scanf("%d",&num);
    tentimes(&num);
    printf("The Number 10 Times Is : %d",num);
    return 0;
}