#include<stdio.h>

int main()
{
 int a, b, c;
 printf("Check if a triangle is valid by entering its angles. \nEnter the first angle:\n");
 scanf("%d", &a);
 printf("Enter the second angle:\n");
 scanf("%d", &b);
 printf("Enter the third angle:\n");
 scanf("%d", &c);
// sum of angles has to be equal to 180 and individual angles>0
 if ( a+b+c==180 && a>0 && b>0 && c>0 ) {
  printf("The triangle is valid.");
 }
 else {
  printf("The triangle is not valid.");
 }

 return 0;
}