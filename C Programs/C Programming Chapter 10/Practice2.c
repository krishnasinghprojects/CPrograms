#include <stdio.h>

int main()
{	
    FILE *ptr;
    ptr= fopen("text2.txt","w");
    int num;
    printf("Enter The Number : ");
    scanf("%d",&num);
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%d x %d = %d\n",num,i+1,num*(i+1));
    }
    fclose(ptr);
    return 0;
}