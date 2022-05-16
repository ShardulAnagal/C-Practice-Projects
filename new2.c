#include<stdio.h>

int main()
{
    float length, breadth, area;
    printf("Enter value of length :\n");
    scanf("%f", &length);
    printf("Enter value of breadth :\n");
    scanf("%f", &breadth);
    area= length*breadth;
    printf("Area of given sides of rectangle is %f", area);
    return 0;
}
