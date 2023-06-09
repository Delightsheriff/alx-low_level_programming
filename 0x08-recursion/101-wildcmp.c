#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first argument
 * @s2: second argument
 *
 * Return: integer
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		else if (*s1 == '\0')
		{
			return (0);
		}
		else
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
	}
	else if (*s1 == '\0')
	{
		if (*s2 == '\0')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
