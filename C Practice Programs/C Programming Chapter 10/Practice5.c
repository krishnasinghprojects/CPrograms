#include <stdio.h>

int main()
{	
    FILE *ptr1;
    ptr1 = fopen("text5.txt","r");
    int num1;
    fscanf(ptr1,"%d",&num1);
    fclose(ptr1);
    FILE *ptr2;
    ptr2 = fopen("text5.txt","w");
    fprintf(ptr2,"%d",num1*2);
    fclose(ptr2);
    return 0;
}