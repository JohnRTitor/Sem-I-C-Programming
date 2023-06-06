#include<stdio.h>
// Count the digits of a number
int countF(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}
// Armstrong number
void armstrong(int n)
{
	int count = countF(n), t = n, sum=0, rem;

	while (n > 0)
	{
		// extract the digits
		rem = n % 10;
		// then digit^count and sum them
		sum += pow(rem, count);
		n /= 10;
	}
	(sum == t) ? printf("%d is an Armstrong number.", t) : printf("%d is not an Armstrong number.", t);
}

// main starts
int main()
{
    int num;
    printf("Enter a number to check if a number is armstrong:");
    scanf("%d", &num);
    armstrong(num);
    return 0;
}