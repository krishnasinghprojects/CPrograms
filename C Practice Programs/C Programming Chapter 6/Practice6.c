#include <stdio.h>

int main()
{	
    int num;
    printf("Enter A Number : ");
    scanf("%d",&num);
    int* pointer1=&num;
    int** pointer2=&pointer1;
    printf("Value Of Number : %d\n",num);
    printf("Adress Of Number : %p\nValue Of Number With First Adress : %d\n",pointer1,*pointer1);
    printf("Adress Of First Adress : %p\nValue Of Number With Second Adress : %d\n",pointer2,**pointer2);
    return 0;
}