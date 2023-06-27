#include <stdio.h>
int main()
{
	int n, i;
	long long sum = 0;
	printf("Summation of natural numbers' cubes upto n. For example, 1^3 + 2^3 + 3^3 + ..... \nPlease enter the value of n: \n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		// i^3 and add to sum
		sum += pow(i, 3);
	}
	printf("The summation is %lld.", sum);
	return 0;
}