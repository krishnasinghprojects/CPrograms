#include <stdio.h>

int main()
{	
    int radius,height;
    printf("Enter The Radius : ");
    scanf("%d",&radius);
    float area=radius*radius*3.14;
    printf("Area Of Circle : %f",area);
    printf("\nEnter The Height : ");
    scanf("%d",&height);
    float volume=area*height;
    printf("\nVolume Of Cylinder : %f",volume);
    return 0;
}
