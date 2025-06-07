#include <stdio.h>
#include <string.h>
int encrypt(char str[])
{
    int length = strlen(str);
    for(int i=0;i<length;i++)
    {
        str[i]++;
    }
}
int decrypt(char str[])
{
    int length = strlen(str);
    for(int i=0;i<length;i++)
    {
        str[i]--;
    }
}
int main()
{	
    char str[]="Krishna";
    encrypt(str);
    printf("%s\n",str);
    decrypt(str);
    printf("%s\n",str);
    return 0;
}