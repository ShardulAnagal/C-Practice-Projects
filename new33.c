#include<stdio.h>
// this progrma is understand functions in pointers

int cube(int number);
int square(int *number);

int main(){
    int n;
    printf("enter a number :\n");
    scanf("%d", &n);
    cube(n);
    square(&n);
}

int cube(int number){
    int cube= number*number*number;
    printf("cube is %d\n", cube);
    return cube;
}

// int square(int *number){
//     int square= (*number) * (*number); // value at address of (number) is multiplied twice
//     printf("square is %d\n", square);
//     return square;
// }

int square(int *number){
    *number= (*number) * (*number); // value at address of (number) is multiplied twice
    printf("square is %d\n", *number);
    return 1;
}