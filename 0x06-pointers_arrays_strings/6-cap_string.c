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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
		|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!'
		|| s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')'
		|| s[i - 1] == '{' || s[i - 1] == '}') && isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
		}
		else
		{
			s[i] = tolower(s[i]);
		}
	}
	return (s);
}
