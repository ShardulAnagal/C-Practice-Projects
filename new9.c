#include<stdio.h>

// This program is to print the sum of first n natural numbers

int main()
{
    int n, sum=0;
    printf("Enter a number :\n");
    scanf("%d", &n);
    
    for (int i = 0; i <=n ; i++){
        sum=sum + i;
        }
    printf("%d\n", sum);
    
    return 0;
}
