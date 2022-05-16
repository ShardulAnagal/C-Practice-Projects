#include<stdio.h>
// This program is to calculate sum, product and average of two numbers
void sum(int a, int b);
void product(int a, int b);
void average(int a, int b);

int main(int x, int y){
    printf("enter first number\n");
    scanf("%d", &x);
    printf("enter second number\n");
    scanf("%d", &y);
    sum(x, y);
    product(x, y);
    average(x, y);
    printf("the sum is %u, the product is %u, the average is %u\n", *sum, *product, *average);
}

void sum(int a, int b){
    int sum= a+b;
    printf("sum is %d\n", sum);
    return sum;
}

void product(int a, int b){
    int product= a*b;
    printf("product is %d\n", product);
    return product;
}

void average(int a, int b){
    int average= (a+b)/2;
    printf("Average is %d\n", average);
    return average;
}