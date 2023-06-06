#include<stdio.h>
int calculateGCD(int n1, int n2) {
	if (n2 != 0)
		return calculateGCD(n2, n1%n2);
	else
		return n1;
}

int main()
{
    int num1, num2;
    printf("Enter number 1:");
    scanf("%d", &num1);
    printf("Enter number 2:");
    scanf("%d", &num2);
    printf("The GCD is %d.", calculateGCD(num1, num2));
    return 0;
}