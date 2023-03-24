#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if input is a digit or letter
 * @c: argument to be checked
 *
 * Return: (0) if false, (1) is true
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);

	return (0);
}
