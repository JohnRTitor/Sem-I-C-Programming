#include<stdio.h>
double perimeter, area;
void areaPeri(double *ptr1, double *ptr2) {
	// calculate the perimeter and area
	perimeter = 2*(*ptr1+*ptr2);
	area = *ptr1 * *ptr2;
}
int main()
{
    double base, height;
    printf("Calculate the area and perimeter of a rectangle.");
    printf("\nEnter the base:");
    scanf("%lf", &base);
    printf("\nEnter the height:");
    scanf("%lf", &height);
    
    // call by address method
    areaPeri(&base, &height);
    printf("\nThe area is %.3lf sq. units and the perimeter is %.3lf units.", area, perimeter);
    return 0;
}