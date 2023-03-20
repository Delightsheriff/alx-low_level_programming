#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (j != 9)
			{
				putchar(',');
			}
		}
		putchar('\n');
	}

	return (0);
}
