#include<stdio.h>
int main()
{
    int i, cnt=0, n=0;
    int a[10]={1,2,4,0,8,0,16};
    for ( i = 0; i < 10 ; i++)
    {
        if (a[i]==n)
        cnt++;
        
        printf("%d", cnt);
    }
    
    return 0;
}
