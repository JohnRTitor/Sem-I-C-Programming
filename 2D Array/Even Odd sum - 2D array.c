#include<stdio.h>
// Sum of even elements and odd elements in 2D matrix array 
int main()
{

  int a[10][10], r, c, i, j, even=0, odd=0;
  
  printf("How many rows and columns?");
  scanf("%d %d", &r, &c);
  // Enter the elements
  for (i=0; i<r; i++) {
  	for (j=0; j<c; j++) {
  		printf("Enter element #%d%d:", i, j);
  		scanf("%d", &a[i][j]);
  		if (a[i][j]%2==0) {
  			even += a[i][j];
  		}
  		else {
  			odd += a[i][j];
  		}
  	}
  }
  
  printf("The sum of even elements in the 2D matrix is %d and odd elements is %d.", even, odd);
  	
  return 0;
}