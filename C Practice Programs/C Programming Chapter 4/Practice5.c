#include <stdio.h>

int main()
{	
    int n=0, sum = 0, number;
    printf("Enter The Number : ");
    scanf("%d",&number);
    while(n<=0)
    {
    printf("Enter The Value Number Of Elements For Sum : ");
    scanf("%d", &n);
    }
    for(int i=1;i<=n;i++)
    {
        sum+=(i*number);
    }
    printf("Sum Of n Multiples Of %d : %d\n",number ,sum);
    return 0;
}
