#include<stdio.h>

// This code is to calculate the sum of all numbers between 5 to 50

int main()
{
    int sum=0;
    for (int i = 5; i <= 50; i++)
    {
        sum=sum+i;
    }
    printf("%d\n", sum);
    return 0;
}
