#include "main.h"
#include <ctype.h>

/**
 * cap_string - coverts strings to uppercase
 * @s: argument
 *
 * Return: char
 */

char *cap_string(char *s)
{
	char temp = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (temp && isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
			temp = 0;
		}
		else if (strchr(" \t\n,;.!?\"(){}", s[i]) != NULL)
		{
			temp = 1;
		}
	}
	return (s);
}
