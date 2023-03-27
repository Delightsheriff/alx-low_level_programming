#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: argument
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, len, temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
