#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	char *test;

	test = strchr(s, c);

	if (test != NULL)
		return (test);
	else
		return (NULL);
}
