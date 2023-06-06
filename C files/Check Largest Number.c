#include<stdio.h>
// Check which number is the greatest

int main()
{
    float a, b;
    
    printf("Enter two numbers respectively to check which one is the larger: \n");
    scanf("%f%f", &a, &b);
    if (a>b){
    printf("%f is the largest out of two numbers", a);
    }
    else {
    printf("%f is the largest out of them.", b);
    }
    return 0;
}