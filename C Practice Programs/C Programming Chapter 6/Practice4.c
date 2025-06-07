#include <stdio.h>
int function(int* adress)
{
    printf("The Number In Function Is : %d\n",*adress);
    return 0;
}
int main()
{	
    int num;
    printf("Enter A Number : ");
    scanf("%d",&num);
    function(&num);
    printf("The Number In Main Function Is : %d",num);
    return 0;
}