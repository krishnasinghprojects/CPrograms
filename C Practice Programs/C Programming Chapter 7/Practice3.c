#include <stdio.h>
int reverse(int array[],int length)
{
    length--;
    int temp;
    for (int i = 0; i < length / 2; i++) 
    {
        temp = array[i];
        array[i] = array[length - i];
        array[length - i] = temp;
    }
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
    reverse(array,number);
    printf("Reversed Array : ");
    for(int i=0;i<number;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}