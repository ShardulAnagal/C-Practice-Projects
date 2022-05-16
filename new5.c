#include<stdio.h>

// this program is to find the smallest number 

int main()
{
    int a, b, c;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    printf("Enter third number\n");
    scanf("%d", &c);
    if (a<b)
    {
        if (a<c)
        {
            printf("%d is the smallest number", a);
        }
        else
            printf("%d is the smallest number", c);
    }
    else
    printf("%d is the smallest number", b);
    return 0;
}
