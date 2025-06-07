#include <stdio.h>
int print(int num)
{
    int* adress=&num;
    printf("Adress Of Number In Function : %p\n",adress);
}
int main()
{	
    int num;
    printf("Enter A Number : ");
    scanf("%d",&num);
    int* adress=&num;
    printf("Adress Of The Number : %p \n",adress);
    print(num);
    return 0;
}