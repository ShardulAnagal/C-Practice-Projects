#include<stdio.h>

// Keep taking numbers as input from user until user enters a number which is multiple of 7

int main()
{
    int n;
        printf("Enter a number :\n");
        scanf("%d", &n);
        printf("%d", n);
        if (n%7 == 0)
        {
            printf("You've entered right number !\n");
            
        }
        else
        printf("You've entered wrong number !\n");
        
        return 0;
}
