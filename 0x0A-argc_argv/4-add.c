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
	int i, j, sum = 0;
	char *num;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			*num = argv[i];

			for (j = 0; num[j] != '\0'; j++)
			{
				if (!isdigit(num[j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(num);
		}
		printf("%d\n", sum);
	}
	return (0);
}
