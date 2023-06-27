#include <stdio.h>
// Factorial of a number using recursion
long long factorial(int n)
{
	if (0 == n)
		return 1;
	else
		return n*factorial(n-1);
}
int main()
{
	int num;
	printf("Find the factorial of number. \nEnter the number:");
	scanf("%d", &num);
	printf("The factorial of %d is %lld.", num, factorial(num));
	return 0;
}