#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_hex = 16;
	int i = 0;

	while (i < num_hex)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
		i++;
	}

	putchar('\n');

	return (0);
}
