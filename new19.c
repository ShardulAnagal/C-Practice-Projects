#include <stdio.h>
// This program is to print prime numbers in the range of 0 to 200
int main()
{
    int i = 0;
    printf("This program prints prime numbers in the range of 0 to 200 !\n");
    for (i = 0; i <= 200; i++)
    {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
            printf("%d\n", i);
        }
    }
    

    return 0;
}
