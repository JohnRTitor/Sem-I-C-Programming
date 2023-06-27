#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;  // create a char pointer and set it to NULL
    size_t size = 0;   // create a size_t variable and set it to 0

    // use getline to read a string from the user and dynamically allocate memory for it
    printf("Enter a string: ");
    getline(&str, &size, stdin);

    // print the string
    printf("You entered: %s\n", str);

    // free the dynamically allocated memory
    free(str);

    return 0;
}
