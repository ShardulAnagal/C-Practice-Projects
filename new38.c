#include<stdio.h>

// int main(){
//     int age= 18;
//     int *ptr= &age;
//     printf("%d\n", ptr);
//     ptr+=1;
//     printf("%d\n", *ptr);
// }

int main(){
    int numbers[5];
    // input
    int *ptr=&numbers[0];
    for (int i = 0; i < 5; i++)
    {
        printf("index :%d", i);
        scanf("%d", (numbers+i));
    }
    
}