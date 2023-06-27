#include <stdio.h>
int sumN(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return (n + sumN(n - 1));
}
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
	printf("The sum of natural number upto %d is %d.", num, sumN(num));
	return 0;
}