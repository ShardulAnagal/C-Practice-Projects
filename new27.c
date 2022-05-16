#include<stdio.h>
#include<math.h>

int fact(int n);

int main(){
    printf("factorial is %d\n", fact(4));
    return 0;
}

int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    int fact1= fact(n-1);
    int fact2= fact1*n;
    return fact2;
}


