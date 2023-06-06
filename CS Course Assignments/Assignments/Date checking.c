#include <stdio.h>
#define TRUE 1
#define FALSE 0
enum monthName
{
	January=1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};
typedef struct date
{
	int day;
	enum monthName month;
	int year;
}DATE;
int isLeapYear(int);
int isValidDate(DATE);
int getWeekDay(DATE);


int main()
{
	DATE example;
	printf("Enter a date (in DD/MM/YYYY format):");
	scanf("%d/%d/%d", &example.day, &example.month, &example.year);
	
	if (isValidDate(example) == FALSE)
	{
		fprintf(stderr, "Please enter a valid date.");
		exit(1);
	}
	// WIP - Week Details
	
	return 0;
}

int isLeapYear(int year)
{
	if (year%400 == 0 || (year%100 != 0 && year%4 == 0))
		return TRUE;
	else
		return FALSE;
}

int isValidDate(DATE ex)
{
	int maxDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	maxDays[February] = (isLeapYear(ex.year) == TRUE) ? 29 : 28;
	if (ex.day <1 || ex.day > maxDays[ex.month] || ex.month <1 || ex.month>12 || ex.year<1 || ex.year>9999)
		return FALSE;
	else
		return TRUE;
}

/* WIP:
int getWeekDay(DATE ex)
{
	int h, q, m, K, J;
	
}
*/