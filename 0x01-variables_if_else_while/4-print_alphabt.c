#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphbet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphbet[i] != '\0')
	{
		if (alphbet[i] == 'e' || alphbet[i] == 'q')
		{
			i++;
			continue;
		}

		putchar(alphbet[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
