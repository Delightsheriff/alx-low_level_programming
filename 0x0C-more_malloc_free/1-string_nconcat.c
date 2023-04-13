#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: array of strings
 * @s2: array of strings
 * @n: integer value
 *
 * Return: character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;

	if (s1 == NULL)
		s1 = '\0';

	if (s2 == NULL)
		s2 = '\0';

	if (n >= strlen(s2))
		n = strlen(s2);

	temp = malloc(strlen(s1) + n + 1);
	if (temp == NULL)
		return (temp);

	memcpy(temp, s1, strlen(s1));
	memcpy(temp + strlen(s1), s2, n);
	temp[strlen(s1) + n] = '\0';


	return (temp);
}
