#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: first argument
 * @argv: second argument
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int temp_bytes;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	temp_bytes = atoi(argv[1]);

	if (temp_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < temp_bytes; i++)
	{
		printf("%02x", *((unsigned char *)main + i));
		if (i < temp_bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
