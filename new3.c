#include<stdio.h>

// This program is to check whether given number is divisible by 2 or not 

int main()
{
    int a, b;
    printf("Enter any number to check whether it is divisible by 2 or not\n");
    scanf("%d", &a);
    b=a%2;
    if (b == 0)
    {
        printf("Number is divisible by 2\n"); 
    }
    else
    printf("Number isn't divisible by 2\n");

    return 0;
}
