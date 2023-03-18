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
		putchar(alphbet[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
