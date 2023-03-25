#include "main.h"

/**
 * print_triangle - to print a triangle
 * @size: parameter
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j++)
			{
				_putchar(' ');
			}

			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
