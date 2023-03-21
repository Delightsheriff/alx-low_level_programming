#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase.
 * Return: void
 */
void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;

	}
	_putchar('\n');
}
