#include <stdio.h>

int main()
{	
    float income;
    printf("Enter Your Income Per Annum In Lakhs (LPA) : ");
    scanf("%f",&income);
    if(income<=2.5 && income>=0.0)
    {
        printf("You Are Earning Less Than 2.5 Lakhs Per Annum\nYou Don't Have To Pay Any Tax !");
    }
    else if(income>=2.5 && income<=5.0)
    {
        printf("Your Income Is Between 2.5 LPA to 5.0 LPA\nYour Taxation Amount Is : %f Rupees",(income*5000));
    }
    else if(income>=5.0 && income<=10.0)
    {
        printf("Your Income Is Between 5.0 LPA to 2.5 LPA\nYour Taxation Amount Is : %f Rupees",(income*20000));
    }
    else if(income>=10.0)
    {
        printf("Your Income Is Greater Than 10.0 LPA\nYour Taxation Amount Is : %f Rupees",(income*30000));
    }
    else
    {
        printf("Income Cannot Be Negative !");
    }
    return 0;
}