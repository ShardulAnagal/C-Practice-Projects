#include<stdio.h>

int sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter first number :\n");
    scanf("%d", &a);
    printf("Enter second number :\n");
    scanf("%d", &b);
    int sum(int a, int b);

    int s= a+b;
    printf("The sum is %d", s);
    return 0;
}

int sum(int a, int b){
    printf("%d\n", a+b);
    return a+b;
}