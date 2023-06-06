#include<stdio.h>
void palindrome(int *ptr) {
	int rev = 0, rem, t = *ptr;
	// calculate the perimeter and area
	while (*ptr>0) {
		rem = *ptr%10;
		rev = rev*10 + rem;
		*ptr /= 10;
	}
	(t==rev) ? printf("%d is palindrome.", t) : printf("%d is not palindrome.", t);
}
int main()
{
    int num;
    printf("Check if a number is palindrome:");
    scanf("%d", &num);
    
    // call by address method
    palindrome(&num);
    return 0;
}