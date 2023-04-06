#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if input is uppercase or lowercase
 * @c: argument to be checked
 *
 * Return: (0) if lowercase, (1) if uppercase
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);


	return (0);
}
