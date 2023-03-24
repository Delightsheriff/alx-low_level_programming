#include "main.h"

/**
 * more_numbers - prints 0-14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (k > 9)
			{
				_putchar('1');
				k = j % 10;
			}

			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
