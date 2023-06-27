#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 6
#define INPUT(x, size) \
	({\
		if (fgets(x, size, stdin) == NULL || x[0] == '\n')\
		{\
			fprintf(stderr, "Error reading details of student#%d.", i+1);\
			exit(-1);\
		}\
		x[strlen(x) - 1] = '\0';\
	})

// Take input the details of six students and show details of the student who got maximum marks

typedef struct student
{
	char name[30];
	char dept[50];
	int roll;
	int admission_year;
	char course[20];
	int marks;
}STUDENT;

void readStudentData (STUDENT*);
int findTopper (STUDENT*);
void clearBuffer(void);

int main()
{
	STUDENT sdent[MAX_STUDENTS];
	int topper;
	printf("Enter the details of six students:");
	readStudentData(sdent);
	topper = findTopper(sdent);
	printf("\nThe student who scored the maximum is: \n%s from %s who got %d in %s, having been admitted in %d.", sdent[topper].name, sdent[topper].dept, sdent[topper].marks, sdent[topper].course, sdent[topper].admission_year);
	return 0;
}

void readStudentData (STUDENT stud[])
{
	int i;
	for (i=0; i<MAX_STUDENTS; i++)
	{
		printf("\nEnter details of student#%d: \n", i+1);
		printf("\tName:");
		INPUT(stud[i].name, 30);
		printf("\tDept.");
		INPUT(stud[i].dept, 50);
		printf("\tRoll:");
		scanf("%d", &stud[i].roll);
		clearBuffer();
		printf("\tAdmission Year:");
		scanf("%d", &stud[i].admission_year);
		clearBuffer();
		printf("\tCourse:");
		INPUT(stud[i].course, 20);
		printf("\tMarks:");
		scanf("%d", &stud[i].marks);
		clearBuffer();
	}
}

int findTopper(STUDENT stud[])
{
	int i, max, studentID;
	max = stud[0].marks;
	studentID = 0;
	for (i=1; i<MAX_STUDENTS; i++)
	{
		if (max < stud[i].marks )
		{
			max = stud[i].marks;
			studentID = i;
		}
	}
	return (studentID);
}

void clearBuffer(void)
{
	char read_new_line;
	while ((read_new_line = getchar()) != '\n' && (int)read_new_line != EOF);
}