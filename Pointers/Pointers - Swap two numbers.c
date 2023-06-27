#include<stdio.h>
void swap(int *ptr1, int *ptr2) {
	int t;
	//swap the contents of the addresses
	t = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = t;
}
int main()
{
    int num1, num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("Before swap: num1 is %d and num2 is %d.\n", num1, num2);
    // call by address method
    swap(&num1, &num2);
    printf("After swap: num1 is %d and num2 is %d.\n", num1, num2);
    return 0;
}