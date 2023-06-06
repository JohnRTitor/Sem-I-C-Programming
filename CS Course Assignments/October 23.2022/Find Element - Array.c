#include<stdio.h>
// Search an element in array

int main()
{

  int a[50], i, size, searchFor, flag=0;
    
  printf("How many elements in the array? ");
  scanf("%d", &size);
  // input the elements 
  for (i=0; i<size; i++) {
    printf("Enter element no %d:", i+1);
    scanf("%d", &a[i]);
  }
  // Which element to search?
  printf("Enter an element to look for:");
  scanf("%d", &searchFor);
  
  // search for the element, if found set flag=1 and break the loop
  for (i=0; i<size; i++) {
	if (a[i] == searchFor) {
	 flag=1;
	 break;
	}
  }
  
  // Print the result
  (flag == 1) ? printf("\n%d is found at position %d.", searchFor, i + 1) : printf("\n%d is not found in the array.", searchFor);  
  return 0;
}