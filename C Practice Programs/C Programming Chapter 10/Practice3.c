#include <stdio.h>

int main()
{	
    FILE *ptr,*ptrw1,*ptrw2;
    ptr = fopen("text3.txt","r");
    ptrw1 = fopen("text3copy1.txt","a");
    ptrw2 = fopen("text3copy2.txt","a");
    char reader=fgetc(ptr);
    while (reader!=EOF)
    {
        printf("%c",reader);
        fprintf(ptrw1,"%c",reader);
        fprintf(ptrw2,"%c",reader);
        reader= fgetc(ptr);
    }
    return 0;
}