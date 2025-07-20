#include <stdio.h>
float force(float mass)
{
    return (mass*9.8);
}
int main()
{	
    float mass;
    printf("Enter The Mass : ");
    scanf("%f",&mass);
    printf("Force Applied On The Body : %f Newtons",force(mass));
    return 0;
}