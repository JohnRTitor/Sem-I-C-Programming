#include<stdio.h>
// Check if a number is even or odd

int main()
{
    int n;
    
    printf("Enter the number to check: \n");
    scanf("%d", &n);
    if (n%2 == 0){
    printf("%d is an even number.", n);
    }
    else {
    printf("%d is an odd number.", n);
    }
    return 0;
}