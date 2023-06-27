#include<stdio.h>
// Check if a year is leapyear 

int main()
{
    int year;
    
    printf("Enter a year to check if it's a leapyear: \n");
    scanf("%d", &year);
    
    // "%" in condition means modulo.
    //  For example if the year is completely divisible by 400
    // The modulo becomes 1
    // The condition here is if the value represents a century
    // It has to be divisible by 400
    // Or if it's not a century it has to be divisible by 4.
    
    if ( year%400==0 || (year%4==0 && year%100!=0) ) {
    printf("%d is a leapyear.", year);
    }
    else {
    printf("%d is not a leapyear.", year);
    }
    
    return 0;
}