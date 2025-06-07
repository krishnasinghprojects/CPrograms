#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main()
{	
    
    printf("Number Guessing Game\n");
    srand(time(0));
    int number=(rand())%100+1,guess,point=0,attempts=0;
    do
    {
        printf("Enter The Guess : ");
        scanf("%d",&guess);
        if(guess<number)
        {
            printf("Guess Higher !\n");
        }
        else if (guess>number)
        {
            printf("Guess Lower !\n");
        }
        attempts++;
    } while (guess!=number);
    printf("Congratulations You Have Guessed The Number in %d Attempts !",attempts);
    return 0;
}