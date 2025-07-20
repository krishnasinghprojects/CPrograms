#include <stdio.h>
typedef struct vector
{
    int xaxis,yaxis,zaxis;
}Vector;
Vector addVector(Vector vec1,Vector vec2)
{
    Vector vec3;
    vec3.xaxis=vec1.xaxis+vec2.xaxis;
    vec3.yaxis=vec1.yaxis+vec2.yaxis;
    vec3.zaxis=vec1.zaxis+vec2.zaxis;
    return vec3;
}

int main()
{	
    Vector vec1,vec2,*ptr;
    printf("Enter The Vector 1 X-Axis And Y-Axis And Z-Axis : \n");
    scanf("%d",&vec1.xaxis);
    scanf("%d",&vec1.yaxis);
    scanf("%d",&vec1.zaxis);
    printf("Enter The Vector 2 X-Axis And Y-Axis And Z-Axis : \n");
    scanf("%d",&vec2.xaxis);
    scanf("%d",&vec2.yaxis);
    scanf("%d",&vec2.zaxis);
    Vector vec3=addVector(vec1,vec2);
    ptr=&vec3;
    printf("Vector : %di %dj %dk",ptr->xaxis,ptr->yaxis,ptr->zaxis);
    return 0;
}