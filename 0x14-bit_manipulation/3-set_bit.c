#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal
 * @index: index position
 *
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);

	for (temp = 1; index > 0; index--, temp *= 2)
		;
	*n += temp;

	return (1);
}
