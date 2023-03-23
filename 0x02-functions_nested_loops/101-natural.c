#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: calculates the sum of multiples of 3
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

