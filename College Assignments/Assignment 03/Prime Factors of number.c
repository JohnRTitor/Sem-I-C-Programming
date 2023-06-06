#include <stdio.h>
#include <math.h>
int prime(int n)
{
	int i, flag;
	flag = (0==n || 1==n) ? 0 : 1;
	for (i = 2; i <= sqrt(n); i++)
	{
		flag = (n % i == 0) ? 0 : 1;
		break;
	}
	// if prime return 1
	return (flag);
}
void primeFactor(int n)
{
	int j;
	for (j = 2; j <= n / 2; j++)
	{
		if (n % j == 0 && prime(j) == 1)
		{
			printf("%d, ", j);
		}
	}
}

int main()
{
	int num;
	printf("Enter the number to get the prime factors:");
	scanf("%d", &num);
	printf("The prime factors are:\n");
	primeFactor(num);
	return 0;
}
