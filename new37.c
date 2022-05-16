#include<stdio.h>
// write a program to enter price of 3 items & print thier final cost with gst
int main(){
    float price[3];
    printf("enter price of first item :\n");
    scanf("%f", &price[0]);

    printf("enter price of second item :\n");
    scanf("%f", &price[1]);

    printf("enter price of third item :\n");
    scanf("%f", &price[2]);

    printf("final price of item 1 is :%f\n", (price[0]*0.18)+price[0]);
    printf("final price of item 2 is :%f\n", (price[1]*0.18)+price[1]);
    printf("final price of item 3 is :%f\n", (price[2]*0.18)+price[2]);
    return 0;
}