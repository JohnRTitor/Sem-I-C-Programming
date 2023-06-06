#include<stdio.h>
#include<math.h>

int main()
{
    int n=1, t, count, sum, remainder;
    printf("A number is called Armstrong number when it is equal to the sum of its own digits each raised to the power of the number of digits. \nThe Armstrong numbers between 1 to 500 are: ");
    while (n<=500) {
        t=n;
        remainder=0;
        count=0;
        sum=0;

// Count the number of digits
        while (n>0) {
            count++;
            n/=10;
        }
        n=t;

        while (n>0) {
// extract the digits
            remainder= n%10;
// then digit^count and sum them
            sum+= pow(remainder, count);
            n/= 10;
        }
        n=t;
        
// if sum = original number
        if (t==sum) {
            printf("%d, ", t);
        }

        n++;
    }
    printf(".");
    return 0;
}