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
	int num1, num2;

	if  (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d", num1 * num2);
		return (0);
	}
}
