#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENT 6

typedef struct student // Define student structure
{
	char name[100];
	int roll;
	char dept[100];
	char course[200];
	int admissionYear;

} student;

void clearBuffer(void);
student readStudentData(int);
void searchByYear(student *);
void searchByRoll(student *);

int main()
{
	int i, choice;
	student studentId[MAX_STUDENT]; // can store data of upto 6 students
	
	printf("Enter details of six students:\n");
	for (i = 0; i < MAX_STUDENT; i++)
	{
		studentId[i] = readStudentData(i);
	}

	while (1)
	{
		printf("\nPress 1 to search by year of admission. \nPress 2 to search by roll number. \nType 3 to exit. \nEnter your choice:");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			{
				searchByYear(studentId);
				break;
			}
		case 2:
			{
				searchByRoll(studentId);
				break;
			}
		case 3:
		{
			exit(0);
			break;
		}
		default:
			{
				printf("Invalid input.");
				exit(1);
			}
		}
	}

	return 0;
}

// Clear input buffer
void clearBuffer(void)
{
	char read_new_line;
	while ((read_new_line = getchar()) != '\n' && (int)read_new_line != EOF)
		; // Strips out \n character left out in input stream, ie. flush the input string
}

// Input function

student readStudentData(int no)
{
	student sdent;
	printf("Enter details of student#%d: \n\tName:", no + 1);
	if (fgets(sdent.name, 100, stdin) == NULL || sdent.name[0] == '\n')
	{
		fprintf(stderr, "Error reading name of student#%d.", no + 1); //error message if no input is provided/not stored
		exit(-1);
	}
	sdent.name[strlen(sdent.name) - 1] = '\0'; // strips the \n character added by fgets

	printf("\n\tRoll:");
	scanf("%d", &sdent.roll);
	clearBuffer();

	printf("\n\tDepartment:");
	if (fgets(sdent.dept, 100, stdin) == NULL || sdent.dept[0] == '\n')
	{
		fprintf(stderr, "Error reading department of student#%d.", no + 1);
		exit(-1);
	}
	sdent.dept[strlen(sdent.dept) - 1] = '\0';

	printf("\n\tCourse:");
	if (fgets(sdent.course, 200, stdin) == NULL || sdent.course[0] == '\n')
	{
		fprintf(stderr, "Error reading course of student#%d.", no + 1);
		exit(-1);
	}
	sdent.course[strlen(sdent.course) - 1] = '\0';

	printf("\n\tYear of Admission:");
	scanf("%d", &sdent.admissionYear);
	clearBuffer();

	return sdent;
}

// Search by Year function
void searchByYear(student *sdent)
{
	int i, find_admissionYear, found = 0;

	printf("Enter the admission year you want to find:");
	scanf("%d", &find_admissionYear);
	found = 0;
	printf("Name of students who joined in %d: ", find_admissionYear);
	for (i = 0; i < MAX_STUDENT; i++)
	{
		if (sdent[i].admissionYear == find_admissionYear)
		{
			printf("%s, ", sdent[i].name);
			found = 1;
		}
	}
	if (found != 1)
		printf("No data found with the given year (%d).", find_admissionYear);
}

// Search by roll number
void searchByRoll(student *sdent)
{
	int i, find_roll, found = 0;
	printf("Enter the roll number:");
	scanf("%d", &find_roll);
	found = 0;
	printf("Details of students with the roll %d:\n", find_roll);
	for (i = 0; i < MAX_STUDENT; i++)
	{
		if (sdent[i].roll == find_roll)
		{
			printf("%s - from %s dept., studying the course %s (from the year %d).\n", sdent[i].name, sdent[i].dept, sdent[i].course, sdent[i].admissionYear);
			found = 1;
		}
	}
	if (found != 1)
		printf("No student found with the given roll number (%d).", find_roll);
}
