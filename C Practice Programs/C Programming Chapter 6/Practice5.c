#include <stdio.h>
int function(int* adress1,int * adress2)
{
    int sum=*adress1+*adress2;
    return sum;
}
int main()
{	
    int num1,num2;
    printf("Enter Two Numbers : \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    int sum=function(&num1,&num2);
    float average=sum/2.0;
    printf("The Sum Of Two Numbers Is : %d\n",sum);
    printf("The Average Of Two Numbers Is : %f\n",average);
    return 0;
}