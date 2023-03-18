#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphbet[] = "abcdefghijklmnopqrstuvwxyz";
	char ALPHBET[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (alphbet[i] != '\0')
	{
		putchar(alphbet[i]);
		i++;
	}

	i = 0;
	while (ALPHBET[i] != '\0')
	{
		putchar(ALPHBET[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
