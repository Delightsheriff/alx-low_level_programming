#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: first argument
 *
 * Return: char
 */

char *leet(char *s)
{
	int i;
	char sam [5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = sam[0];
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = sam[1];
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = sam[2];
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = sam[3];
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = sam[4];
		}
	}
	return (s);
}
