#include<stdio.h>

int main()
{
    
    int price;
    int *ptr= &price;
    price=100;
    float **pptr = &ptr;
    printf("%d\n", **pptr);
    return 0;

}
// not working