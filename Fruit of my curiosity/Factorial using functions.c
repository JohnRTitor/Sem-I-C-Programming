#include<stdio.h>

int factorial(int);
int main()
{
    int n;
    long long result;
    printf("Enter the number:");
    scanf("%d", &n);
    result=factorial(n);
    printf("The factorial of %d is %lld.", n, result);
    return 0;
}
int factorial (int a)
{
	int i;
	long long fact=1;
	for (i=a; i>=1; i--) {
		fact *= i;
	}
	return (fact);
}