#include<stdio.h>

int main()
{
    int n=10, t, reverse, rem;
    printf("The Palindrome numbers between 10 to 100 are: ");
    while (n<=100) {
        t=n;
        rem=0;
        reverse=0;
// first reverse the number
        while (n>0) {
            rem= n%10;
            reverse = 10*reverse + rem;
            n/= 10;
        }
        n=t;
        
// if reverse = original number
        if (n==reverse) {
            printf("%d, ", n);
        }

        n++;
    }
    return 0;
}