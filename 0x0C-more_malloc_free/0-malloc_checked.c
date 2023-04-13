#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer value
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *temp = malloc(b);

	if (temp == NULL)
		exit(98);

	return (temp);
}
