#include "main.h"

/**
 * times_table - Prints the multiplication table
 *
 * Description: This function prints the multiplication table
 * Return: void
 *
 */

void times_table(void)
{
	int i, j;
	int table = 9;
	int max = 9;
	int product;

	for (i = 0; i <= table; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 0; j <= max; j++)
		{
			product = i * j;

			if (product <= 9)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
