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
		for (j = 0; j <= max; j++)
		{
			product = i * j;

			if (j == 0)
			{
				_putchar(product + '0');
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar('0' + product);
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
