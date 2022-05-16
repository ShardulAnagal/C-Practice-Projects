#include<stdio.h>
#include<math.h>
// This program is to find factorial of n number
int factorial(int n);

int main(int a)
{
    printf("Enter a number :\n");
    scanf("%d\n", &a);
    int factorial(int n);
    
    return 0;
}

int factorial(int n){
    if (n == 0)
    {
        return 0;
    }
    
    int fact1= fact(n-1);
    int fact2= fact1*n;
    printf("%d\n", fact2);
    return fact2;
}