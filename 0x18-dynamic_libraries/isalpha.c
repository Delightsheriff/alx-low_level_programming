#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if input is an alphabet or not
 * @c: argument to be checked
 *
 * Return: (0)  if lowercase, (1)cif uppercase
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);

	return (0);
}
