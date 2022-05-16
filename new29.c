#include<stdio.h>
// This program is to understand pointers
int main()
{
    int age=18;
    int *pointer1= &age;
    int _age= *pointer1;
    printf("%d\n", _age);

    return 0;
}
