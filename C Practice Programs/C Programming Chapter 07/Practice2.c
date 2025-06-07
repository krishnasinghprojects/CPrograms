#include <stdio.h>

int main()
{	
    int number,n;
    printf("Enter The Number To Get Its Table : ");
    scanf("%d",&number);
    printf("Enter The Number Of Times You Want The Table : ");
    scanf("%d",&n);
    int table[n];
    for(int i=0;i<n;i++)
    {
        table[i]=number*(i+1);
    }
    for (int i = 0;i<n;i++)
    {
        printf("%d x %d = %d\n",number,i+1,table[i]);
    }
    return 0;
}