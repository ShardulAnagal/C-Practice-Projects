#include<stdio.h>

//This program is to find average of three numbers

int main()
{   
    int a, b, c, d, e;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    printf("Enter third number\n");
    scanf("%d", &c);
    d=a+b+c;
    e=d/3;
    printf("Average of three numbers is %d", e);

    return 0;
}
