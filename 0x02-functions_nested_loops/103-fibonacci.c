#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: more fibonacci
 * Return: 0
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;
	int c;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		
		c = a + b;

		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
