#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_CUSTOMER 5
#define MAX_BALANCE 1000

typedef struct customer
{
	char name[100];
	long long accountNo, balance;
} customer;

void clearBuffer(void);
customer readData (int);
void searchByBalance(customer*, long long);

int main()
{
    int i;
    customer customerId[MAX_CUSTOMER];
    
    for (i=0; i<MAX_CUSTOMER; i++)
    {
    	customerId[i] = readData(i);
    }
    searchByBalance(customerId, MAX_BALANCE);
    
    return 0;
}

// clear input buffer function
void clearBuffer(void) {
	char read_new_line;
	while( (read_new_line = getchar()) != '\n' && (int)read_new_line != EOF ); // clears leftover input buffer
}
customer readData (int no)
{
	customer cust;
	printf("Enter the data of customer#%d: \n\tFull Name:", no+1);
	if ( fgets(cust.name, 100, stdin) == NULL || cust.name[0] == '\n')
	{
		fprintf(stderr, "Error reading full name of customer#%d.", no+1);
		exit(-1);
	}
	cust.name[strlen(cust.name) - 1] = '\0'; //discard the \n character added by fgets
	
	printf("\n\tAccount number:");
	scanf("%lld", &cust.accountNo);
	clearBuffer();
	
	printf("\n\tBalance:");
	scanf("%lld", &cust.balance);
	clearBuffer();
	
	return cust;
}
void searchByBalance(customer *cust, long long maxBal)
{
	int i, found = 0;
	printf("The customers with balance below %lld are: \n", maxBal);
	for (i=0; i<MAX_CUSTOMER; i++)
	{
		if (cust[i].balance < maxBal)
		{
			printf("%s - A/c No. %lld \n", cust[i].name, cust[i].accountNo);
			found = 1;
		}
	}
	if (found != 1)
		printf("No data found.\n");
}	
