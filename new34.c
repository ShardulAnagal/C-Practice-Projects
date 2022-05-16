#include<stdio.h>
// This program is to swap two numbers a & b
int swap(int a, int b);
int _swap(int *a, int *b);

int main(){
    int x; int y;
    printf("enter a number :\n");
    scanf("%d", &x);
    printf("enter second number :\n");
    scanf("%d", &y);
    //swap(x, y);
    _swap(&x, &y);
    //printf("first number is %d and second number is %d\n", y, x);
}

int swap(int a, int b){
    int c=a;
    b=a;
    c=b;
    printf("first number is %d and second number is %d\n", a, b);
    return a,b;
}

int _swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
    printf("first number is %d and second number is %d\n", *a, *b);
    return *a, *b;
}
