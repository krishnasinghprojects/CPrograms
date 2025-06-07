#include <stdio.h>
#include <string.h>
int length(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}
int copy(char str1[],char str2[])
{
    int i=0;
    while(i<=length(str2))
    {
        str1[i]=str2[i];
        i++;
    }
}
int main()
{	
    char string1[]="HelloWorld";
    char string2[]="";
    copy(string2,string1);
    printf("%s",string2);
    return 0;
}