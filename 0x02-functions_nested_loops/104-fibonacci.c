#include <stdio.h>
/**
 * main - executes the block of code
 * Return: 0
 */

int main(void)
{
	int a = 1;
	int b = 1;
	int i;

	printf("%d, %d, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		int c = a + b;

		printf("%d, ", c);
		a = b;
		b = c;
	}
	printf("%d\n", a + b);
	return (0);
}
