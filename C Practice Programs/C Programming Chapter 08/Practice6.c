#include <stdio.h>
#include <string.h>
int occur(char str[],char x)
{
    int count=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(x==str[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{	
    char str[]="KrishnaSingh";
    char search='i';
    int count=occur(str,search);
    printf("Characher %c occurs in string %s %d times",search,str,count);
    return 0;
}