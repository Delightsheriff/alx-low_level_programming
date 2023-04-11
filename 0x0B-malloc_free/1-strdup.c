#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: array of characters
 *
 * Return: character
 */
char *_strdup(char *str)
{
	char *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	temp = strdup(str);

	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		return (temp);
	}
}
