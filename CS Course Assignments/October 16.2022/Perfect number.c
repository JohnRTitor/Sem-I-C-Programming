#include<stdio.h>
#include<math.h>

int main()
{
  int i, n, result=0;
  printf("Check if a number is a perfect number.\nEnter the number:\n");
  scanf("%d", &n);
  for (i=1; i<=n/2; i++) {
   if (n%i==0) {
// getting the factors and summing them up
    result += i;
   }
  }
// if the sum of factors=original number
  if (result==n) {
   printf("%d is a perfect number.", n);
  }
  else {
   printf("%d is not a perfect number.", n);
  }
  return 0;
}