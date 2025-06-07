#include <stdio.h>
int trim(char str[],int m,int n)
{
    int j=0;
    for (int i = m; i < n; i++)
    {
        str[j]=str[i];
        j++;
    }
    str[j]='\0';
}
int main()
{	
    char str[]="KrishnaSingh";
    int m=2,n=8;
    trim(str,m,n);
    printf("%s",str);

    return 0;
}