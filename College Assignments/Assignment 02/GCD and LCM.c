#include <stdio.h>

int main()
{
	int i, num1, num2, gcd, lcm;
	printf("Enter two numbers");
	scanf("%d %d", &num1, &num2);
	for (i=1; i<=num1 && i<= num2 ; i++)
	{
		if (num1%i==0 && num2%i==0) {
			// if n1 & n2 are both divisible by i
			gcd = i;
		}
	}
	// formula for calculating gcd
	lcm=(num1*num2)/gcd;
	printf("GCD of %d and %d = %d. \n LCM of %d and %d = %d", num1, num2, gcd, num1, num2, lcm);
	return 0;
}