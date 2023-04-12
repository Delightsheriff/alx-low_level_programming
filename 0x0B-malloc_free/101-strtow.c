#include "main.h"

/**
 * strtow - splits a string into two words
 * @str: character
 *
 * Return: character
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k = 0;
	char **words;

	if (!str || !*str)
		return (NULL);
	words = malloc(strlen(str) * sizeof(char *));

	if (!words)
		return (NULL);

	while (str[i])
	{
		while (isspace(str[i]))
			i++;

		if (!str[i])
			break;
		j = i;
		while (str[j] && !isspace(str[j]))
			j++;
		words[k] = malloc((j - i + 1) * sizeof(char));
		if (!words[k])
		{
			while (--k >= 0)
				free(words[k]);
			free(words);
			return (NULL);
		}
		strncpy(words[k], &str[i], j - i);
		words[k][j - i] = '\0';
		k++;
		i = j;
	}
	words[k] = NULL;
	return (words);
}
