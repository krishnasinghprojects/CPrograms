#include <stdio.h>

int main()
{	
    int array[10][3],num[3];
    printf("Enter Three Numbers To Get Their Tables : \n");
    scanf("%d",&num[0]);
    scanf("%d",&num[1]);
    scanf("%d",&num[2]);
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<3;j++)
        {
            array[i][j]=num[j]*(i+1);
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}