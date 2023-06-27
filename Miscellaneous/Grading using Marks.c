#include<stdio.h>

// Grading
int main()

{
	int grade;
	
	printf("Enter your grade percentage: \n");
	scanf("%d",&grade);

	if (grade>=90 && grade<=100) {
		printf("Your Grade is O (Outstanding).");
 }
	else if (grade>=80 && grade<=89) {
		printf("Your Grade is E (Excellent).");
 }
 else if (grade>=70 && grade<=79) {
   printf("Your Grade is A (Very Good).");
 }
 else if (grade>=60 && grade<=69) {
   printf("Your Grade is B (Good).");
 }
 else if (grade>=50 && grade<=59) {
   printf("Your Grade is C (Average).");
 }
 else if (grade>=0 && grade<=49) {
   printf("Your failed this exam.");
 }
 else {
   printf("Please enter a valid percentage (ranges between 0-100).");
 }
		
	return 0;
}