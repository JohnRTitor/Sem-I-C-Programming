#include<stdio.h>
#include<math.h>

int main()
{
  int n, t, count=0, sum=0, remainder;
  printf("Enter a number: \n");
  scanf("%d", &n);
  t=n;

// Count the number of digits
   while (n>0) {
   count++;
   n/=10;
   }
   n=t;

   while (n>0) {
// extract the digits 
   remainder= n%10;
// then digit^count and sum them
   sum+= pow(remainder, count);
   n/= 10;
   }
   
  // if sum = original number 
  if (t==sum) {
   printf("%d is an Armstrong number.", t);
   }
  else {
   printf("%d is not an Armstrong number.", t);
   }

return 0;
}