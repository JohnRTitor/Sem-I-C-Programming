#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Prototype declaration
void read(int);
void output(double);
void triangleArea(void);
void rectangleArea(void);
void circleArea(void);
// global declaration of array
double a[4];

// main starts
int main()
{
	int choice;

	// infinite loop
	while (1)
	{
		printf("\nNow choose one of the options or press 4 to exit. \nCalculate the area of a - \n\t 1: Triangle \n\t 2: Rectangle \n\t 3: Circle \n\nEnter your choice: \n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			triangleArea();
			break;
		case 2:
			rectangleArea();
			break;
		case 3:
			circleArea();
			break;
		case 4:
			exit(0); // exits the program immediately
			break;
		default:
			printf("Invalid input.");
			exit(1);
			break;
		}
	}
	return 0;
}

/* Function definition starts */
// Read/input function
void read(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &a[i]);
	}
}
// Output function
void output(double area)
{
	printf("The area is %.3lf sq units.", area);
}

// Function for calculating the area of triangle
void triangleArea(void)
{
	double s, area;
	printf("Enter three sides:");
	read(3);
	
	s = (a[0] + a[1] + a[2]) / 2; // s = semi-perimeter
	area = sqrt(s * (s - a[0]) * (s - a[1]) * (s - a[2])); // formula for calculating area
	output(area);
}
// Function for calculating the area of rectangle
void rectangleArea(void)
{
	double area;
	printf("Enter two sides of the rectangle (base and height):");
	read(2);
	area = a[0] * a[1]; // formula for calculating area
	output(area);
}
// Function for calculating the area of circle
void circleArea(void)
{
	double area;
	printf("Enter the radius:");
	read(1);
	area = M_PI * a[0] * a[0]; // pi*r^2, formula for area
	output(area);
}