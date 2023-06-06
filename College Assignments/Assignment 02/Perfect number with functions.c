#include<stdio.h>
// Perfect number function

void perfect(int n)
{
	int i, t = n, sum=0;
	for (i = 1; i <= n / 2; i++)
	{
		sum += i;
	}
	// if factors of the number are summed and the original is returned, it's perfect
	(sum == t) ? printf("%d is a perfect number.", t) : printf("%d is not a perfect number.", t);
}
// Main starts
int main()
{
    int num;
    printf("Enter a number to check whether it is a perfect number:");
    scanf("%d", &num);
    perfect(num);
    return 0;
}