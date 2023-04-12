#include "main.h"

/**
 * _isspace - checks if a character is a whitespace
 * @c: a character
 *
 * Return: 1 if c is a whitespace, otherwise 0
 */
int _isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
 * skipspace - skip all spaces and jump to the start of the next word
 * @str: a string
 *
 * Return: a pointer to the beginning of the next word
 */
char *skipspace(char *str)
{
	while (*str && _isspace(*str))
		str++;
	return (str);
}
/**
 * countchars - count the number of characters in the first word of a string
 * @str: a string
 *
 * Return: the length of the word
 */
unsigned int countchars(char *str)
{
	unsigned int length = 0;

	while (str[length] && !_isspace(str[length]))
		length++;
	return (length);
}
/**
 * countwords - count how many words are in a string
 * @str: a string
 *
 * Return: the number of words in the string
 */
unsigned int countwords(char *str)
{
	unsigned int wc = 0;
	char state = 0;

	while (*str)
	{
		if (_isspace(*str))
			state = 0;
		else if (state == 0)
		{
			state = 1;
			wc++;
		}
		str++;
	}
	return (wc);
}
/**
 * strtow - split a string into words
 * @str: a string
 *
 * Return: an array of words found in the string
 */
char **strtow(char *str)
{
	char **words;
	char *word;
	unsigned int wc, w, c;

	if (str == NULL || *str == '\0')
		return (NULL);
	word = skipspace(str);
	if (*word == '\0')
		return (NULL);
	wc = countwords(word);
	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (w = 0; w < wc; w++)
	{
		unsigned int length = countchars(word);

		words[w] = malloc(length + 1);
		if (words[w] == NULL)
		{
			while (w--)
				free(words[w]);
			free(words);
			return (NULL);
		}
		for (c = 0; c < length; c++)
			words[w][c] = word[c];
		words[w][c] = '\0';
		word = skipspace(word + length);
	}
	words[w] = NULL;
	return (words);
}
