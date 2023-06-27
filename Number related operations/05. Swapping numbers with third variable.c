#include<stdio.h>

int main()
{
    int a=6, b=8, t;
    
    printf("Before the swap numbers are %d and %d respectively. \n", a, b);
    t=a;
    a=b;
    b=t;
    printf("After the swap the numbers are %d and %d respectively.", a, b);
    
    return 0;
}