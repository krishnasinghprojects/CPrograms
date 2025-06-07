#include <stdio.h>
int length(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{	
    char str[]="HelloWorld";
    int count = length(str);
    printf("The Length Of The String Is : %d",count);
    return 0;
}