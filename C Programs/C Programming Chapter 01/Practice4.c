#include <stdio.h>

int main()
{	
    float principal,rate,time;
    printf("Enter The Principal Amount : ");
    scanf("%f",&principal);
    printf("Enter The Interest Rate : ");
    scanf("%f",&rate);
    printf("Enter Time Time Duration : ");
    scanf("%f",&time);
    float interest=(principal*rate*time)/100;
    float amount=principal+interest;
    printf("The Total Interest Is %f And The Total Amount Is %f",interest,amount);
    return 0;
}