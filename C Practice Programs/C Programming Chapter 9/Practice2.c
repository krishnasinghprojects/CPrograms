#include <stdio.h>
typedef struct vector
{
    int xaxis,yaxis;
}Vector;
Vector addVector(struct vector vec1,struct vector vec2)
{
    struct vector vec3;
    vec3.xaxis=vec1.xaxis+vec2.xaxis;
    vec3.yaxis=vec1.yaxis+vec2.yaxis;
    return vec3;
}

int main()
{	
    Vector vec1,vec2;
    printf("Enter The Vector X-Axis And Y-Axis : \n");
    scanf("%d",&vec1.xaxis);
    scanf("%d",&vec1.yaxis);
    scanf("%d",&vec2.xaxis);
    scanf("%d",&vec2.yaxis);
    Vector vec3=addVector(vec1,vec2);
    printf("Vector : %d i %d j",vec3.xaxis,vec3.yaxis);
    return 0;
}