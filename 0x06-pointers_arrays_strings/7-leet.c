#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: first argument
 *
 * Return: char
 */

char *leet(char *s)
{
	int i, j;
	char sam [5] = {'4', '3', '0', '7', '1'};
	char temp [5] = {'a', 'e', 'o', 't', 'l',  };

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; temp[j] != '\0'; j++)
		{
			if ((s[i] == temp[j] - 32) || (temp[j] == s[i]))
			{
				s[i] = sam[j];
			}
		}
	}
	return (s);
}
