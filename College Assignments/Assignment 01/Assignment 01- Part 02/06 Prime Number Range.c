#include<stdio.h>
#include<math.h>

int main()
{
  int a, b, i, j, flag;

  printf("Show all prime numbers between <lower range> to <upper range>.\nFrom:\n");
  scanf("%d", &a);
  printf("To:\n");
  scanf("%d", &b);
  printf("The prime numbers between %d and %d are ", a, b);

// start looping from a to b
  for (i=a; i<=b; i++) { 

// force the loop start from 2 since 0,1 are not prime
     if (i==1 || i==0) {
        continue; 
        }
// flag variable to check if i is prime
     flag = 0; 

     for (j=2; j<=sqrt(i); ++j) {
// if i has any factors, it is not prime
         if (i%j==0) {
            flag = 1;
            break;
            }
         }

// flag = 0, prime
// flag = 1, non prime
     if (flag == 0) {
        printf("%d ", i);
        }

      }


  return 0;
}