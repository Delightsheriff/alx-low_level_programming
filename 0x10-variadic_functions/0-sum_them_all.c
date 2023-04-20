#include "variadic_functions.h"

/**
 * sum_them_all - sum of all it's parameters
 * @n: count
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, value;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum += value;
	}

	va_end(args);
	return (sum);
}