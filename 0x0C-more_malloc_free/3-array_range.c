#include "main.h"

/**
 * array_range - array of integers
 * @min: min value
 * @max: max value
 *
 * Return: integer
 */
int *array_range(int min, int max)
{
	int *temp;
	int i;

	if (min > max)
		return (NULL);

	temp = malloc((max - min + 1) * sizeof(int));

	if (temp == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		temp[i] = min + 1;
	}

	return (temp);
}
