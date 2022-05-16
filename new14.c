#include<stdio.h>

// Print factorial of number n 

int main()
{   
    int n, factorial=1;
    printf("Enter a number :\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial= factorial * i;
    }
    printf("%d\n", factorial);
    return 0;
}
