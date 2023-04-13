#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers as arguments
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	long num1, num2, result;
	char *endptr;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s num1 num2\n", argv[0]);
		return (1);
	}

	num1 = strtol(argv[1], &endptr, 10);
	if (*endptr != '\0')
	{
		fprintf(stderr, "Error: %s is not a valid integer\n", argv[1]);
		return (1);
	}

	num2 = strtol(argv[2], &endptr, 10);
	if (*endptr != '\0')
	{
		fprintf(stderr, "Error: %s is not a valid integer\n", argv[2]);
		return (1);
	}

	result = num1 * num2;

	printf("%ld\n", result);

	return (0);
}
