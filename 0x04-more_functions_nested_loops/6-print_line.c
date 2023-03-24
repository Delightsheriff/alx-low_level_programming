#include "main.h"

/**
 * print_line - prints a straight line
 * @n: input to be acted upon
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
