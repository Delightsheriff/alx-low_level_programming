#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int temp;

	for (temp = 0; temp < argc; temp++)
	{
		printf("%s\n", argv[temp]);
	}

	return (0);
}
