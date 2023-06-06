#include <stdio.h>
int factorial(int n)
{
	int i;
	long long fact = 1;
	for (i = n; i >= 1; i--)
	{
		fact *= i;
	}
	return (fact);
}
int nCr(int n, int r)
{
	// nCr formula is n!/{(n-r)!r!}
	return (factorial(n) / (factorial(n - r) * factorial(r)));
}
int main()
{
	int i, row, space, elem;
	printf("Enter the number of rows:");
	scanf("%d", &row);
	for (i = 0; i <= row; i++)
	{
		for (space = 0; space <= row - i; space++)
		{
			printf(" "); //space controlling loop
		}
		for (elem = 0; elem <= i; elem++)
		{
			printf("%2d ", nCr(i, elem)); // element controlling loop, call nCr function to start
		}
		printf("\n");
	}
	return 0;
}