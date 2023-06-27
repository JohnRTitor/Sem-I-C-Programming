#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, j, maxStudents;
	long int happyCount = 0, happyStudents = 0, booksNeeded = 0, *min, *max;
	scanf("%d", &maxStudents); //nnumber of students
	if (maxStudents < 1 || maxStudents > 10000)
		exit(1);

	min = (long int *)calloc(maxStudents, sizeof(long int));
	max = (long int *)calloc(maxStudents, sizeof(long int));

	for (i = 0; i < maxStudents; i++)
	{
		scanf("%ld %ld", &min[i], &max[i]); // min denotes minimum books they need, while max denotes maximum books they can handle
		if (min[i] < 1 || min[i] > pow(10, 9) || max[i] < 1 || max[i] > pow(10, 9))
			exit(1);
	}

	for (i = 0; i < maxStudents; i++)
	{
		happyCount = 0; // at the first of each loop
		for (j = 0; j < maxStudents; j++)
		{
			if ((min[i] >= min[j]) && (min[i] <= max[j]))
				happyCount++; // count how many students could be happy if min[i] was the answer
		}

		if ((happyCount > happyStudents) || (happyStudents == happyCount && min[i] < booksNeeded))
		{
			// store the maximum happy students needed and minimum books needed
			happyStudents = happyCount;
			booksNeeded = min[i];
		}
	}
	printf("%ld %ld", booksNeeded, happyStudents);
	free(min);
	free(max);
	return 0;
}