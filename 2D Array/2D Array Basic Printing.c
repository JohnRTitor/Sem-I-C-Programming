#include<stdio.h>
// 2D matrix array printing
int main()
{

  int a[10][10], r, c, i, j;
  
  printf("How many rows and columns?");
  scanf("%d %d", &r, &c);
  printf ("\nEnter the elements");
  for (i=0; i<r; i++) {
  	for (j=0; j<c; j++) {
  		scanf("%d", &a[i][j]);
  	}
  }
  
  printf("The elements are:\n");
  for (i=0; i<r; i++) {
  	for (j=0; j<c; j++) {
  		printf("%d ", a[i][j]);
  	}
  	printf("\n");
  }
  	
  return 0;
}