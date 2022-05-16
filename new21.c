#include<stdio.h>
void namaste();
void bonjour();

int main()
{   
    char N;
    printf("Enter I if you're Indian or enter F if you're French\n");
    scanf("%c", &N);
    if (N == 'I')
    {
        namaste();
    }
    else
        bonjour();
    return 0;
}

void namaste(){
    printf("Namaste !\n");
}

void bonjour(){
    printf("Bonjour !\n");
}