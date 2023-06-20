#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searches
 * @accept: bytes to be used to search
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	char *test;

	test = strpbrk(s, accept);

	if (test != NULL)
		return (test);
	else
		return (NULL);
}
