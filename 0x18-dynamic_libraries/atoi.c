#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converts a strint to an integer
 * @s: argument
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int res;
	int sine;
	int stop = 0;

	sine = -1;
	res = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sine = sine * -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res -= (s[i] - '0');
			stop = 1;
		}
		else if (stop == 1)
			break;


		s++;
	}

	return (res * sine);
}
