#include<stdio.h>
// This program is to understand basics of array
int main(){
    float marks[4];

    printf("enter marks of electronics :\n");
    scanf("%f", &marks[0]);

    printf("enter marks of cs :\n");
    scanf("%f", &marks[1]);

    printf("enter marks of maths :\n");
    scanf("%f", &marks[2]);

    printf("enter marks of stats :\n");
    scanf("%f", &marks[3]);

    printf("marks of ele are %f, marks of cs are %f,
        marks of maths are %f, marks of stats are %f",
        marks[0], marks[1], marks[2], marks[3]);
        return 0;
}

// not working