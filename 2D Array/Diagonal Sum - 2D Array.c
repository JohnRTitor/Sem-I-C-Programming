#include<stdio.h>
// Sum of diagonal elements 
int main()
{

  int a[10][10], r, c, i, j, dsum=0;
  
  printf("How many rows and columns?");
  scanf("%d %d", &r, &c);
  // Enter the elements
  for (i=0; i<r; i++) {
  	for (j=0; j<c; j++) {
  		printf("Enter element #%d%d:", i, j);
  		scanf("%d", &a[i][j]);
  		if (i==j) {
  			dsum += a[i][j];
  		}
  	}
  }
  
  printf("The sum of all principal diagonal elements is %d.", dsum);
  	
  return 0;
}