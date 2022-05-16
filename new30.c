#include<stdio.h>
// Basic program to understand pointers
// int main()
// {
//     int x;
//     int *pointer;
//     pointer= &x;
//     *pointer= 10;
//     printf("%d\n", *pointer);
//     printf("%d\n", x);

//     *pointer+= 5;
//     printf("%d\n", *pointer);
//     printf("%d\n", x);

//     return 0;
// }

// following is to understand pointer to pointer
int main()
{
     float *ptr;
    float price;
    *ptr= &price;
    price=100.00;
    float **pptr= &ptr;
    printf("%p\n", **pptr);
    return 0;

}