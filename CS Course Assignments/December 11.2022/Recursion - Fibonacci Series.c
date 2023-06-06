#include<stdio.h>

int fibonacci (int n)
{
	if (n==0) {
		return 0;
	}
	else if (n==1)
	{
		return 1;
	}
	else {
	return (fibonacci(n-1) + fibonacci(n-2));
	}
}
int main()
{
    int i, num;
    printf("Enter the number of terms in Fibonacci series:");
    scanf("%d", &num);
    for (i=0; i<num; i++)
    {
    	printf("%d, ", fibonacci(i));
    }
    
    return 0;
}