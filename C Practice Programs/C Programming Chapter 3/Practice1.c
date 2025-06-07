#include <stdio.h>

int main()
{	
    printf("Program To Check Student Is Fail Or Pass\n");
    int sub1,sub2,sub3,mm;
    printf("Enter Your Marks\n");
    printf("Subject 1 : ");
    scanf("%d",&sub1);
    printf("Subject 2 : ");
    scanf("%d",&sub2);
    printf("Subject 3 : ");
    scanf("%d",&sub3);
    printf("Enter Maximum Marks : ");
    scanf("%d",&mm);
    float totalpercent=(sub1+sub2+sub3)*100/(3.0*mm);
    if(sub1*100/mm>=33 && sub2*100/mm>=33 && sub3*100/mm>=33)
    {
        printf("Student Has Passed All Three Subjects Individually\n");
        if(totalpercent>=40)
        {
            printf("Student Has Passed The Examination With Total Percentage : %f",totalpercent);
        }
        else
        {
            printf("Student Has Failed The Examination");
        }
    }
    else
    {
        printf("Student Has Failed In Individual Subject\n");
        printf("Student Has Failed The Examination");
    }
    return 0;
}