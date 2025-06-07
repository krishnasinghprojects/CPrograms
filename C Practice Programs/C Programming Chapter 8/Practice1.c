#include <stdio.h>
#include <string.h>

int main()
{	
    char string1[10],string2[10];
    printf("Enter Two Strings : \n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%c",&string1[i]);
        fflush(stdin);
    }
    string1[7]='\0';
    scanf("%s",string2);
    if(strcmp(string1,string2)==0)
    {
        printf("The Strings Are Equal");
    }
    else
    {
        printf("The Strings Are Not Equal");
    }
    return 0;
}