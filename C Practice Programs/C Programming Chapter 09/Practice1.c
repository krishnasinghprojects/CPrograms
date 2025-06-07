#include <stdio.h>
struct vector
{
    int xaxis,yaxis;
};

int main()
{	
    struct vector vec1;
    printf("Enter The Vector X-Axis And Y-Axis : \n");
    scanf("%d",&vec1.xaxis);
    scanf("%d",&vec1.yaxis);
    printf("Vector : %d i %d j",vec1.xaxis,vec1.yaxis);
    return 0;
}
area=r*r*pi