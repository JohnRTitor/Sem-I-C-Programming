#include<stdio.h>
#include <stdlib.h>
// To C program to dynamically allocate memory and find sum of all elements
int main()
{
    int i, size, *arr, sum=0;
    printf("How many elements?");
    scanf("%d", &size);
    arr = (int *)calloc(size, sizeof(int));
    for (i=0; i<size; i++) {
    	printf("Enter element #%d:", i+1);
    	scanf("%d", arr+i);
    	sum += *(arr+i);
    }
    printf("The sum is %d.", sum);
    return 0;
}