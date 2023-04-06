#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: first argument
 * @needle: second argument
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *test;

	test = strstr(haystack, needle);

	if (test != NULL)
		return (test);
	else
		return (NULL);


}
