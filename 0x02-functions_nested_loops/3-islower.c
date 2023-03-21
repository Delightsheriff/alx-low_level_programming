#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks if alphabet is uppercase or lower
 * @c: argument
 *
 * Return: (0) if lowercase, (1) if uppercase
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);


	return (0);
}
