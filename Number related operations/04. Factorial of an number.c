#include<stdio.h>
int main()
{
int n, i, fact=1;
printf("Please enter the value of n.\n");
scanf("%d", &n);
for (i=n; i>=1; i--){
fact = fact*i;
}
printf("The factorial of the given number: %d", fact);
return 0;
}
