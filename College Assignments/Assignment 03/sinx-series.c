#include <stdio.h>
#include <math.h>
int factorial(int n)
{
	int k;
	long long fact = 1;
	for (k = n; k >= 1; k--)
	{
		fact *= k;
	}
	return (fact);
}
int main()
{
	int i, j, limit;
	long double x, xrad, sum = 0;
	printf("Get the summation of sinx series x-x^3/3! + x^5/5! - x^7/7! +.....\n ie, find the value of sinx using the series. \nPlease enter the value of x (in degrees) in the sinx series:");
	scanf("%Lf", &x);
	printf("Please enter the number of terms you want to expand the series to:");
	scanf("%d", &limit);

	xrad = x * M_PI / 180; // convert to radian

	for (i = 1, j = 1; i <= limit; i++, j += 2)
	{
		if (i % 2 == 1) //if odd position
		{
			sum += pow(xrad, j) / (long double)factorial(j);
		}
		else // or else even position
		{
			sum -= pow(xrad, j) / (long double)factorial(j);
		}
	}
	printf("\n sin(%.2Lf) = %Lf.", x, sum);
	return 0;
}
