#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/bio.h>
#include <openssl/evp.h>
#define MALLOC_ERROR(ptr) \
	({\
		if (ptr == NULL)\
		{\
			perror("Memory allocation failed.");\
			exit(-1);\
		}\
	})
#define BUFFER_SIZE 1024
/* This is a simple menu driven program to encode a string into base64 format and vice versa.*/

int base64_encode(unsigned char *, size_t, unsigned char *, size_t *);
int base64_decode(unsigned char *, size_t, unsigned char *, size_t *);
void clearBuffer(void);

int main()
{
	int option, return_code;
	unsigned char *input = NULL, *output = NULL;
	size_t size, bytes_read, input_len, output_len;

	while (1)
	{
		printf("1. Encode into base64 format\n");
		printf("2. Decode from base64 format\n");
		printf("3. Quit\n");
		printf("Enter option: ");
		scanf("%d", &option);
		clearBuffer(); // removes leftover input buffer

		if (option == 3)
		{
			printf("Successfully terminated the process.");
			break;
		}

		switch (option)
		{
		case 1:
		{
			size = 0; // initialized at 0, when taking input it is automatically adjusted
			printf("Enter string to encode: ");
			bytes_read = getline((char **)&input, &size, stdin);				 // getline takes user input and re allocates memory if necessary, also returns the number of bytes read
			input[bytes_read - 1] = '\0';										 // discard the \n character
			output = (unsigned char *)realloc(output, bytes_read + BUFFER_SIZE); // allocate memory for output string with some extra bytes
			MALLOC_ERROR(output); // error message in case realloc fails

			input_len = strlen((char *)input);
			return_code = base64_encode(input, input_len, output, &output_len); // call the function and store the return code for checking
			output[output_len] = '\0'; // convert it to a printable string
			if (return_code == 0)
				printf("Encoded string: %s\n", output);
			else
				perror("Error encoding into base64 format.");
			break;
		}
		case 2:
		{
			size = 0;
			printf("Enter string to decode: ");
			bytes_read = getline((char **)&input, &size, stdin);
			input[bytes_read - 1] = '\0';
			output = (unsigned char *)realloc(output, bytes_read + BUFFER_SIZE);
			MALLOC_ERROR(output);

			input_len = strlen((char *)input);
			return_code = base64_decode(input, input_len, output, &output_len);
			output[output_len] = '\0';
			if (return_code == 0)
				printf("Decoded string: %s\n", output);
			else
				perror("Error decoding from base64 format.");
			break;
		}
		default:
			printf("Invalid option\n");
			break;
		}
	}

	free(input), free(output); // free the allocated memory
	return 0;
}

int base64_encode(unsigned char *in, size_t inlen, unsigned char *out, size_t *outlen)
{
	BIO *b64, *bmem;
	b64 = BIO_new(BIO_f_base64());
	bmem = BIO_new(BIO_s_mem());
	b64 = BIO_push(b64, bmem);
	BIO_write(b64, in, inlen);
	BIO_flush(b64);
	*outlen = BIO_read(bmem, out, BUFFER_SIZE + inlen);
	BIO_free_all(b64);
	if (*outlen <= 0) // if length is not more than 0, return an error code
		return 1;
	return 0;
}

int base64_decode(unsigned char *in, size_t inlen, unsigned char *out, size_t *outlen)
{
	BIO *b64, *bmem;
	b64 = BIO_new(BIO_f_base64());
	BIO_set_flags(b64, BIO_FLAGS_BASE64_NO_NL); // Don't require newlines every 64 characters
	bmem = BIO_new_mem_buf(in, inlen);
	bmem = BIO_push(b64, bmem);
	*outlen = BIO_read(bmem, out, BUFFER_SIZE + inlen);
	BIO_free_all(bmem);
	if (*outlen <= 0)
		return 1;
	return 0;
}

void clearBuffer(void)
{
	char read_new_line;
	while ((read_new_line = getchar()) != '\n' && (int)read_new_line != EOF);
}