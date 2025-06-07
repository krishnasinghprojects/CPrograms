#include <stdio.h>

int main()
{	
    FILE *ptr;
    ptr = fopen("text1.txt","r");
    int num1,num2,num3;
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    printf("Addition : %d",num1+num2+num3);
    return 0;
}