#include <stdio.h>
#include <string.h>
int check(char str[],char x)
{
    for(int i=0;i<strlen(str);i++)
    {
        if(x==str[i])
        {
            printf("FOUND ! At Index %d\n",i);
        }
    }
}
int main()
{	
    char str[]="KrishnaSingh";
    char ch='s';
    check(str,ch);
    return 0;
}