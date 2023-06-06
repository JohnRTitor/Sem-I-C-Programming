#include<stdio.h>
#include<math.h>

int main()
{
printf("Use this interface to calculate real roots of a quadratic equation easily. Input the values of a, b, c from an example quadratic equation ax^2+bx+c=0 .\n");

 float a, b, c, det, root1, root2;
  printf("\nEnter the value of 'a': \n");
  scanf("%f", &a);
  printf("Enter the value of 'b': \n");
  scanf("%f", &b);
  printf("Enter the value of 'c': \n");
  scanf("%f", &c);

// Formula for calculating the determinant and roots

  det= b*b-4*a*c;
  root1= (-b+sqrt(det))/(2*a);
  root2= (-b-sqrt(det))/(2*a);

// If the equation has two different roots, print this
  if (det>=0 && root1!=root2) {
    printf("The roots of the inputted quadratic equation are %f and %f.", root1, root2);
   }

// If the equation has only one root, display this
  else if (det>=0 && root1==root2) {
    printf("The only root of the inputted quadratic equation is %f.", root1);
   }

// Show this when real roots can not be calculated by the inputted values
  else {
    printf("\n The typed quadratic equation has no real roots. (has imaginary roots)");
    }
    
 return 0;

}