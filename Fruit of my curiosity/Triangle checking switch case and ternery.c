#include <stdio.h>
int main()
{
	// a, b, c sides of the triangle
	int a, b, c, flag;
	printf("Use this interface to check if a triangle is equilateral, isosceles, scalene or a right angle triangle. \nEnter the first side:\n");
	scanf("%d", &a);
	printf("Enter the second side:\n");
	scanf("%d", &b);
	printf("Enter the third side:\n");
	scanf("%d", &c);


/* flag variable to check if a triangle is equilateral, isosceles or scalene or invalid
To form a triangle, the sum of two sides has to be greater than the other side */
	flag = (b + c > a && a + c > b && a + b > c) ? ((a == b && b == c) ? 1 : ((a == b || b == c || c == a) ? 2 : 3)) : 0;
	switch (flag)
	{
	case 0:
		printf("The corresponding sides do not form a triangle.");
		return -1;
		break;
	case 1:
		printf("The triangle is equilateral.");
		break;
	case 2:
		printf("The triangle is isosceles.");
		break;
	case 3:
		printf("The triangle is scalene.");
		break;
	}

	// Use Pythagorean theorem to check if it is a right angle triangle
	// formula is a^2=b^2+c^2
	if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
	{
		printf(" It is also a right angle triangle.");
	}

	return 0;
}