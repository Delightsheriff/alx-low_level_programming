#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: first argument
 * @argv: array
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int (*temp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	temp = get_op_func(argv[2]);

	if (!temp)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", temp(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

