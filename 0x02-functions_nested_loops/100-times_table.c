#include "main.h"

/**
 * print_times_table - prints multiplication table
 * @n: First argument
 *
 * Description: This function prints a multiplication table for each input
 * Return: void
 *
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j == 0)
				_putchar('0' + k);
			else if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}
			else if (k < 100)
			{
				_putchar(' ');
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
			else
			{
				_putchar('0' + k / 100);
				_putchar('0' + (k - 100) / 10);
				_putchar('0' + k % 10);
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		printf("\n");
	}

}
