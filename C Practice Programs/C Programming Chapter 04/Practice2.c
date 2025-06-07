#include <stdio.h>

int main()
{	
    int number;
    printf("Reversed Table Program\n");
    printf("Enter The Number For Table : ");
    scanf("%d",&number);
    for(int i=10;i>=1;i--)
    {
    printf("%d x %d = %d\n",number,i,(number*i));
    }
    return 0;
}