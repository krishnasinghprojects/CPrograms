#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main()
{	
    srand(time(0));
    int number;
    int guess;
    printf("Stone, Paper And Scissors !\n");
    printf("Choose 1 For Stone\nChoose 2 For Paper\nChoose 3 For Scissors\n");
    while(1)
    {
        scanf("%d",&guess);
        number=(rand())%4+1;
        if(guess==1 && number==2)
        {
            printf("You had choosen Stone and Computer choosen Paper\n");
            printf("You LOSE ! Play Again.\n");
        }
        else if(guess==2 && number==3)
        {
            printf("You had choosen Paper and Computer choosen Scissors\n");
            printf("You LOSE ! Play Again.\n");
        }
        else if(guess==3 && number==1)
        {
            printf("You had choosen Scissors and Computer choosen Stone\n");
            printf("You LOSE ! Play Again.\n");
        }
        else if(guess==2 && number==1)
        {
            printf("You had choosen Paper and Computer choosen Stone\n");
            printf("You WIN ! Play Again.\n");
        }
        else if(guess==3 && number==2)
        {
            printf("You had choosen Paper and Computer choosen Stone\n");
            printf("You WIN ! Play Again.\n");
        }
        else if(guess==1 && number==3)
        {
            printf("You had choosen Stone and Computer choosen Scissors\n");
            printf("You WIN ! Play Again.\n");
        }
        else
        {
            printf("You and Computer choosen same\n");
            printf("DRAW ! Play Again.\n");
        }
    }
    return 0;
}