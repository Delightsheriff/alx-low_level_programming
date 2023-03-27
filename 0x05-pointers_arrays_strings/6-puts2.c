#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: argument
 *
 * Return: void
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i = 0;

	while (i < len)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
