#include<stdio.h>
#include<math.h>

int main()
{
  int i, flag=0;
  long long n;
  printf("Check if a number is prime.\nEnter the number:\n");
  scanf("%lld", &n);
  for (i=2; i<=sqrt(n); i++) {
   if (n%i==0) {
// if it has any factors, break the loop
    flag=1;
    break;
   }
  }
// 1 is not a prime number
  if (flag==0 && n!=1) {
   printf("%lld is a prime number.", n);
  }
  else {
   printf("%lld is not a prime number.", n);
  }
  return 0;
}