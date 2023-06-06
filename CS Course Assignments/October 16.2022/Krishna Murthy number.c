#include<stdio.h>

int main()
{
  int i, n, t, fact, remainder, sum=0;
  printf("Enter a number: \n");
  scanf("%d", &n);
  t=n;

  while (n!=0) {
// remainder is used to extract the digits
   remainder = n%10;

// always keep the value 1 when calculating a new factorial 
   fact = 1;

// then find the factorial of the digit
// using a separate loop
   for (i=remainder;i>=1;i--) {
     fact*=i;
    }
   // add the factorials continuously 
   sum += fact;
   n /= 10;

   }
// if the sum is equal to the original number
if (t==sum) {
printf("%d is a Krisna Murthy number.", t);
}
else {
printf("%d is not a Krishna Murthy number.", t);
}

return 0;
}