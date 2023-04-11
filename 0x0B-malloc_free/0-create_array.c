#include "main.h"

/**
 * create_array - creates an array of char and initializes it
 * @size: size of the integer
 * @c: characters
 *
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char *temp;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	temp = malloc(size * sizeof(char));

	if (temp == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}
