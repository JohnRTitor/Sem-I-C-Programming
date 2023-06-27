#include <stdio.h>
#include <math.h>
// Digit count function
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
// Sum of digits function
int digitSum(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return (sum);
}
// main starts
int main()
{
	int temp, num;
	printf("Enter the number:\n");
	scanf("%d", &num);
	temp = num;
	if (countF(num) != 5)
	{
		printf("Invalid input. Please enter only 5 digits number.");
		return 1;
	}

	printf("The sum of the digits of the number %d is %d.", temp, digitSum(num));
	return 0;
}
