#include <stdio.h>

int main()
{	
    int num;
    printf("Enter A Number : ");
    scanf("%d",&num);
    int* adress=&num;
    printf("Adress Of The Number : %p \n",adress);
    printf("Number : %d",*adress);
    return 0;
}