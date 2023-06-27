#include<stdio.h>
// Define power function
int power(int b, int e)
{
	int i;
	long long res=1;
	for (i=1; i<=e; i++) {
		res *= b; // multiply result with b, e times
	}
	return (res);
}
// Main starts
int main()
{
    int base, exp;
    long long result;
    printf("Enter the base:");
    scanf("%d", &base);
    printf("Enter the exponent:");
    scanf("%d", &exp);
    result=power(base, exp);
    printf("The value of %d^%d is %lld.", base, exp, result);
    return 0;
}