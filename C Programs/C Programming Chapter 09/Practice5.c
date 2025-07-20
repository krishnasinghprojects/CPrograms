#include <stdio.h>
#include <string.h>
typedef struct account
{
    int acno;
    char name[25];
    int age;
    int mobno;
    
}account;

int main()
{	
    account cus1;
    cus1.acno=1234567890;
    strcpy(cus1.name, "KrishnaSingh");
    cus1.age=16;
    cus1.mobno=1010101010;
    printf("Customer Details :\n Name : %s\n Age : %d/n Account Number : %d\n Phone Number : %d\n",cus1.name,cus1.age,cus1.acno,cus1.mobno);
    return 0;
}