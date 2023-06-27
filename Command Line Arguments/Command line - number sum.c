#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // for isdigit function

int main(int argc, char* argv[])
{
	int i, sum = 0;
	if (argc < 3)
	{
		fprintf(stderr, "At least enter 2 numbers as arguments!");
		exit(1);
	}
	for (i = 1; i < argc; i++) // start from 1 to skip the name of the program
	{
		if (isdigit(*argv[i])) // check if the first character of the argument is a digit
		{
			sum += atoi(argv[i]); // atoi function converts string to int
		}
		else // if the first character is not a digit
		{
			fprintf(stderr, "Invalid input: %s\n", argv[i]);
		}
	}

	printf("Sum of the inputs: %d\n", sum);

	return 0;
}
