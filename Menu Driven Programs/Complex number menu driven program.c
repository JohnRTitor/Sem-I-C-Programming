#include <stdio.h>
#include <stdlib.h>
// Menu driven program to add, substract, multiply and divide two complex numbers
typedef struct complexNo
{
	double real;
	double imag;
}complex;
enum func {SUM, SUBSTRACT, MULTIPLY, DIVISION}; // this assigns 1 to SUM, 2 to SUBSTRACT.....

void readComplex (complex z[]) // function to handle complex no inputs
{
	int i;
	for (i=0; i<2; i++)
	{
		printf("Enter complex no #%d:", i+1);
		printf("\n\tReal part:");
		scanf("%lf", &z[i].real);
		printf("\tImaginary part:");
		scanf("%lf", &z[i].imag);
	}
}
int main()
{
	complex z[2], sum, diff, prod, quot;
	enum func choice;
	while (1)
	{
		printf("== MAIN MENU == \nEnter your choice: \n\t1. Add two complex numbers: \n\t2. Substract two complex numbers: \n\t3. Multiply two complex numbers: \n\t4. Divide two complex numbers: \n\t5. Exit \n\t");
		scanf("%d", &choice);
		if (choice == 5)
			break;
		switch (choice)
		{
			case SUM:
			{
				readComplex(z);
				sum.real = z[0].real + z[1].real;
				sum.imag = z[0].imag + z[1].imag;
				printf("The sum of two complex numbers is: %.2lf + (%.2lf)i.", sum.real, sum.imag);
				break;
			}
			case SUBSTRACT:
			{
				readComplex(z);
				diff.real = z[0].real - z[1].real;
				diff.imag = z[0].imag - z[1].imag;
				printf("The difference of the two complex numbers is: %.2lf + (%.2lf)i.", diff.real, diff.imag);
				break;
			}
			case MULTIPLY:
			{
				readComplex(z);
				prod.real = (z[0].real*z[1].real) - (z[0].imag*z[1].imag);
				prod.imag = (z[0].real*z[1].imag) + (z[1].real*z[0].imag);
				printf("The product of the two complex number is: %.2lf + (%2.lf)i.", prod.real, prod.imag);
				break;
			}
			case DIVISION:
			{
				readComplex(z);
				quot.real = (z[0].real*z[1].real + z[0].imag*z[1].imag)/(z[1].real*z[1].real + z[1].imag*z[1].imag);
				quot.imag = (z[1].real*z[0].imag - z[0].real*z[1].imag)/(z[1].real*z[1].real + z[1].imag*z[1].imag);
				printf("The quotient/the result is: %.2lf + (%.2lf)i.", quot.real, quot.imag);
				break;
			}
			default:
			{
				printf("Invalid input.");
				break;
			}
		}
		printf("\nGoing back to main menu....\n");
	}
	
	return 0;
}