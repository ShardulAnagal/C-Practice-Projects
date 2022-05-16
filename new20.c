#include<stdio.h>
// This program is to understand functions
int printhello();
void printgoodbye();

int main(){
    printhello();
    printgoodbye();
    return 0;
}
int printhello(){
    printf("Hello World !\n");
}
void printgoodbye(){
    printf("Goodbye !\n");
}