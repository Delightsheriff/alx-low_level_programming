#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns the power of a number
 * @x: integer value
 * @y: integer value
 *
 * Return: nothing
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
