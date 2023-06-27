#include <stdio.h>
#include <stdlib.h>
// Opens a.txt and looks for integer values and seperates them on a even odd basis
int main()
{
	int num;
	FILE *fa, *fodd, *feven;
	fa = fopen("a.txt", "r");
	fodd = fopen("odd.txt", "w");
	feven = fopen("even.txt", "w");
	if (fa == NULL || fodd == NULL || feven == NULL)
	{
		perror("Error opening file.");
		exit(-1);
	}
	
	while (fscanf(fa, "%d,", &num) == 1) // fscanf returns no of inputs successfully read and assigned
	{
		if (num%2 == 1)
			fprintf(fodd, "%d, ", num);
		else
			fprintf(feven, "%d, ", num);
	}
	printf("Successfully sorted the even and odd numbers and dumped into even.txt and odd.txt respectively.");
	fclose(fa), fclose(fodd), fclose(feven);
	return 0;
}