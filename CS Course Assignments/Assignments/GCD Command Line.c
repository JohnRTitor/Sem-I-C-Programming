#include <stdio.h>
//GCD of two numbers using command line
int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return (gcd(b, a%b));
}
int main(int argc, char *argv[])
{
	int num1, num2;
	if (argc != 3)
	{
		fprintf(stderr, "Please supply two numbers through command line.");
		exit(1);
	}
	num1=atoi(argv[1]);
	num2=atoi(argv[2]);
	printf("GCD of %d and %d is %d.", num1, num2, gcd(num1, num2));
	return 0;
}