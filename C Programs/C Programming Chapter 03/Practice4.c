#include <stdio.h>

int main()
{	
    char Letter;
    printf("Enter The Character : ");
    scanf("%c",&Letter);
if (Letter >= 97 && Letter <= 122)
{
    printf("The character '%c' is lowercase.\n", Letter);
}
else if (Letter >= 65 && Letter <= 90)
{
    printf("The character '%c' is uppercase.\n", Letter);
}
else
{
    printf("The character '%c' is not an alphabet.\n", Letter);
}
    return 0;
}