#include <stdio.h>
int main()
{
	
	int n, t, remainder, sum=0;
 printf("Calculate the sum of digits of a number.\nEnter the number:");
	scanf("%d", &n);
 t=n;
	while(n>0)
	{
		remainder = n%10;
  sum += remainder;
		n/=10;
	}
	printf("The sum of digits of the number %d is %d.", t, sum);
 
 return 0;
}