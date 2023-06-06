#include<stdio.h>
// Check which number is the greatest

int main()
{
    float a, b;
    
    printf("Enter two numbers respectively to check which one is the largest: \n");
    scanf("%f%f", &a, &b);
    (a>b) ? printf("%f is the largest.", a) : printf("%f is the largest.", b);
    return 0;
}