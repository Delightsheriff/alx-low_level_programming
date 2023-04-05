#include "main.h"

/**
 * factorial - returns the factorial os a number
 * @n: integer
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 1)
		return (-1);
	else
		return (n * factorial(n - 1));
}
