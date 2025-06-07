#include <stdio.h>
int count(int array[],int length)
{
    int countpositive=0;
    for(int i=0;i<length;i++)
    {
        if(array[i]>0)
        {
            countpositive++;
        }
        else{}
    }
    return countpositive;
}
int main()
{	
    int number;
    printf("Enter The Size Of Array : ");
    scanf("%d",&number);
    int array[number];
    for(int i=0;i<number;i++)
    {
        printf("Enter The %d Element : ",i+1);
        scanf("%d",&array[i]);
    }
    int countpositive = count(array,number);
    printf("The Number Of Positive Elements : %d",countpositive);
    return 0;
}