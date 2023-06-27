#include<stdio.h>
int main()
{
int n, i, sum=0;
printf("Summation of natural numbers upto n. Please enter the value of n: \n");
scanf("%d",&n);
for (i=1; i<=n; i++)
{
sum = sum+i;
}
printf("The summation is %d.",sum);
return 0;
}