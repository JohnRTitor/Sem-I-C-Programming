#include <stdio.h>

int main()
{
 int i, base, exponent;
 long long result = 1;
// Input base and exponent from user
  printf("Enter base: ");
  scanf("%d", &base);
  printf("Enter exponent: ");
  scanf("%d", &exponent);
// Multiply base, exponent times
  for(i=1; i<=exponent; i++) {
   result = result * base;
   }
  printf("The value of %d ^ %d = %lld", base, exponent, result);
    return 0;
}