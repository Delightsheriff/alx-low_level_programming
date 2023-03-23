#include <stdio.h>

/**
 * main - Entry point
 * Description: prints fibonacci numbers
 * Return: 0 always
 */

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}

