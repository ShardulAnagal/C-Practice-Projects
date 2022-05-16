#include<stdio.h>
// This program calculates area of square, circle and rectangle
float areasquare(float length);
float areacircle(float radius);
float arearectangle(float length, float breadth);

int main()
{
    float length= 4.0, radius=5.0, breadth=6.0;
    
    float areasquare(float length);
    printf("Area of square is %f", areasquare(float length));
    float areacircle(float radius);
    printf("Area of circle is %f", areacircle(float radius));
    float arearectangle(float length, float breadth);
    printf("Area of rectangle is %f", arearectangle(float length, float breadth));
    return 0;
}

float areasquare(float length){
    // printf("Area of square for the given length is %f", );
    return length*length;
}

float areacircle(float radius){
    // printf("Area of circle for the given radius is %f", );
    return 3.142*radius*radius;
}

float arearectangle(float length, float breadth){
    // printf("Area of rectangle for the given lenght and breadth is %f", );
    return length*breadth;
}

// not working