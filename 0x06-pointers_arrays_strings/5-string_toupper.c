#include "main.h"
#include <ctype.h>

/**
 * string_toupper - coverts strings to uppercase
 * @s: argument
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	char *temp = s;

	while (*temp != '\0')
	{
		*temp = toupper(*temp);
		temp++;
	}
	return (s);
}
