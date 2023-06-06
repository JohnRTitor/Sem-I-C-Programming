#include<stdio.h>
#include<math.h>

int main()
{
printf("Use this interface to calculate roots of a quadratic equation easily. Input the values of a, b, c from an example quadratic equation ax^2+bx+c=0 .\n");

 double a, b, c, discriminant, root1, root2, realPart, imgPart;

// Takes input of a, b, c
  printf("\nEnter the value of 'a': \n");
  scanf("%lf", &a);
  printf("Enter the value of 'b': \n");
  scanf("%lf", &b);
  printf("Enter the value of 'c': \n");
  scanf("%lf", &c);

// Formula for calculating the discriminat and roots

  discriminant = b*b-4*a*c;
  root1 = (-b+sqrt(discriminant))/(2*a);
  root2 = (-b-sqrt(discriminant))/(2*a);
  realPart = (-b)/(2*a);
  imgPart = sqrt(-discriminant)/(2*a);

// For real and different roots
  if (discriminant>0) {
    printf("The roots of the inputted quadratic equation are %f and %f.", root1, root2);
   }

// For real and same roots
  else if (discriminant==0) {
    printf("The only root of the inputted quadratic equation is %lf.", realPart);
   }

// For imaginary/complex roots
  else if (discriminant<0) {
    printf("\n The typed quadratic equation has no real roots but has imaginary (complex roots).\n And the roots are %.2lf+(%.2lf)i and %.2lf-(%.2lf)i .", realPart, imgPart, realPart, imgPart);
   }

// For invalid inputs
  else {
    printf("The input provided is invalid.");
   }
    
 return 0;

}