#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
