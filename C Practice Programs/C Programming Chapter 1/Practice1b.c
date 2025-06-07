#include <stdio.h>

int main()
{	
    int length, breadth;
    printf("Enter the length of the rectangle in cm: ");
    scanf("%d", &length);
    printf("Length entered: %d\n", length); 

    printf("Enter the breadth of the rectangle in cm: ");
    scanf("%d", &breadth);
    printf("Breadth entered: %d\n", breadth);

    int area = length * breadth;
    printf("\nArea of the rectangle is: %d ", area);
    
    return 0;
}
