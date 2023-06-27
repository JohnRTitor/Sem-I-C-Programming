#include<stdio.h>

int main()
{
  int i, n;
  printf("Find out the factors of a number.\nEnter the number:\n");
  scanf("%d", &n);
  for (i=1; i<=n/2; i++) {
   if (n%i==0) {
   printf("%d, ", i);
    }
   }
  printf("%d are the factors of %d.", n, n);
    return 0;
}