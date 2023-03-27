#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: argument
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i;
	int temp = len / 2;

	if (len % 2 == 1)
	{
		temp++;
	}

	for (i = temp; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
