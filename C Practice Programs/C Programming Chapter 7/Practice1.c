#include <stdio.h>

int main()
{	
    int array []={1,2,3,4,5,6,7,8,9,10};
    int* ptr=&array[0];
    ptr+=2;
    printf("Value At Third Place : %d",*ptr);
    return 0;
}