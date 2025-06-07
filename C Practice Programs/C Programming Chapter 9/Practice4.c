#include <stdio.h>
typedef struct complex
{
    int real,img;
}Complex;
Complex display(Complex numbers[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Complex number %d = %d + %di\n",i+1,numbers[i].real,numbers[i].img);
    }
}


int main()
{	
    Complex numbers[5];
    for (int i = 0; i < 5; i++)
    {
    printf("Enter The Real And Imaginary Part Of Complex Number %d : \n",(i+1));
    scanf("%d",&numbers[i].real);
    scanf("%d",&numbers[i].img);
    }
    
    display (numbers);
    return 0;
}