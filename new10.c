#include<stdio.h>

// This program is to print the table of n number given by the user

int main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d", &n);

    for (int i=n; i<=(10*n); i=i+n){
        printf("%d\n", i);
    }

    return 0;
}
