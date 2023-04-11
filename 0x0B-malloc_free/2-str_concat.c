#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first character
 * @s2: second character
 *
 * Return: character
 */
char *str_concat(char *s1, char *s2)
{
	char *temp;
	size_t len1;
	size_t len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	temp = malloc(sizeof(char) * (len1 + len2 + 1));

	if (temp != NULL)
	{
		strcpy(temp, s1);
		strcpy(temp + len1, s2);
	}

	return (temp);
}
