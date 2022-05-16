#include<stdio.h>
// This program converts celcius to fahrenheit
float converttemp (float celcius);

int main()
{
    float far= converttemp(37);
    printf("temperature is :%d\n", far);
    return 0;
}

float converttemp(float celcius){
    float far = celcius* (9.0/5.0) + 32;
    return far;
}

// not working program