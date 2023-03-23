#include <stdio.h>

/**
 * main - Entry point
 * Description: prints fibonacci numbers
 * Return: 0 always
 */

int main(void)
{
	int n = 50;
	int a = 1;
	int b = 2;
	int i;

	printf("%d, %d", a, b);

	for (i = 0; i < n; i++)
	{
		int c = a + b;

		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

