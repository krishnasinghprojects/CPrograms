#include <stdio.h>

int main()
{	
    int l,b,h;
    printf("Enter The Size Of Three Dimensional Array : \n");
    scanf("%d",&l);
    scanf("%d",&b);
    scanf("%d",&h);
    int array[l][b][h];
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<b;j++)
        {
            for(int k=0;k<h;k++)
            {
                printf("Enter element to store in [%d][%d][%d] : ",i,j,k);
                scanf("%d",&array[i][j][k]);
            }
        }
    }
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<b;j++)
        {
            for(int k=0;k<h;k++)
            {
                printf("Adress of element stored in [%d][%d][%d] : %u\n",i,j,k,&array[i][j][k]);
                
            }
        }
    }
    return 0;
}