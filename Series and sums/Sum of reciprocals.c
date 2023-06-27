#include <stdio.h>
int main()
{
	int n, i;
	long double sum = 0;
	printf("Summation of natural numbers' reciprocals upto n. For example, 1 + 1/2 + 1/3 + ..... \nPlease enter the value of n: \n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		// 1/i and add to sum, typecast the value of i to prevent error
		sum += 1 / (long double)i;
	}
	printf("The summation is %Lf.", sum);
	return 0;
}