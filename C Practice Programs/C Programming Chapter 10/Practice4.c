#include <stdio.h>

int main()
{	
    FILE *ptr;
    ptr = fopen("text4.txt","w");
    char n1[20],n2[20];
    int s1,s2;
    printf("Enter The Name Of Employee 1 : \n");
    scanf("%s",&n1);
    printf("Enter The Salary Of Employee 1 : \n");
    scanf("%d",&s1);
    printf("Enter The Name Of Employee 2 : \n");
    scanf("%s",&n2);
    printf("Enter The Salary Of Employee 2 : \n");
    scanf("%d",&s2);
    fprintf(ptr,"Employee 1 : %s\n",n1);
    fprintf(ptr,"Salary : %d\n",s1);
    fprintf(ptr,"Employee 2 : %s\n",n2);
    fprintf(ptr,"Salary : %d\n",s2);
    return 0;

}