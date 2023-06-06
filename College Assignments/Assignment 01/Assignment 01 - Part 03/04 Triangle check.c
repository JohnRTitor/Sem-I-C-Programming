#include <stdio.h>
int main()
{
 //sides of the triangle
	int a, b, c;
	printf("Use this interface to check if a triangle is equilateral, isosceles, scalene or a right angle triangle. \nEnter the first side:\n");
	scanf("%d", &a);
	printf("Enter the second side:\n");
	scanf("%d", &b);
	printf("Enter the third side:\n");
	scanf("%d", &c);


// To form a triangle, the sum of two sides has to be greater than the other side
 if ( b+c>a && a+c>b && a+b>c ) {

    if ( a==b && b==c ) {
   //when all sides are equal
     printf("The triangle is equilateral.");
     }
    else if (a==b || b==c || c==a) {
   // when any two sides are equal
     printf("The triangle is isosceles.");
  }
    else {
   // when no side is equal
     printf("The triangle is scalene.");
     }
    
   // Use Pythagorean theorem to check if it is a right angle triangle
   // formula is a^2=b^2+c^2
    if ( a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b ) {
     printf(" It is also a right angle triangle.");
     }

 }
 else {
 printf("The corresponding sides do not form a triangle.");
 }


 return 0;
}