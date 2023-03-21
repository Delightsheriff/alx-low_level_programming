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

	for (i = 0 ; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}

}
