#include<stdio.h>

int main()
{
    int a=6, b=8;
    
    printf("Before the swap numbers are %d and %d respectively. \n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After the swap the numbers are %d and %d respectively.", a, b);
    
    return 0;
}