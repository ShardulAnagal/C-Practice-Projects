#include<stdio.h>

// This program is to give grades to student

int main()
{
    int marks;
    printf("Enter your marks :\n");
    scanf("%d", &marks);

    if (marks < 30)
    {
        printf("You've got C grade\n");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("You've got B grade\n");
    }
    else if (marks >= 70 && marks < 90 ) 
    {
        printf("You've got A grade\n");
    }
    else if (marks >= 90 && marks < 100)
    {
        printf("You've got A+ grade");
    }
    else 
        printf("You've entered wrong marks !");

    return 0;
}
