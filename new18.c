#include<stdio.h>
// This code is to check whether entered number is prime or not 
int main()
{
    int n ;
    printf("Enter a number :\n");
    scanf("%d", &n);
    if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
    {
        printf("Prime number");
    }
    else
    printf("Not a prime number");
    return 0;
}
