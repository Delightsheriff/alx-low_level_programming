#include "main.h"

/**
 * print_alphabet_x10 - a function that
 * uses loop to print the alphabet ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (str[j] != '\n')
		{
			_putchar(str[j]);
			j++;

		}

		_putchar('\n');
		i++;
	}

}
