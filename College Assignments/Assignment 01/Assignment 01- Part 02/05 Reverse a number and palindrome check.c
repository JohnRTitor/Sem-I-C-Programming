#include<stdio.h>

int main()
{
  int n, reverse=0, remainder, t;
  printf("Enter a number to reverse: \n");
  scanf("%d", &n);
  t=n;

// Reverse of 0 does not exist
   while (n!=0) {
   remainder= n%10;
   reverse=reverse*10+remainder;
// n/=10 means n=n/10
   n /= 10;
   }

  if (t>=10 && reverse!=t) {
    printf("Reversed number: %d", reverse);

  }
  else if (t>=1 && reverse==t) {
   printf("The reversed number (%d) is the same as the one entered.", reverse);
  }
  else {
   printf("Please only enter integers.\nFor negative numbers, please omit the sign.");
  }

  return 0;
}