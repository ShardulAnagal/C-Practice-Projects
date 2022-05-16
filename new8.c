#include<stdio.h>

// This program is to print numbers from 0 to n 

int main(void)
{
    int i=0, n;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (i<=n){
        printf("%d\n", i);
        i++;
    }
    return 0;
}
