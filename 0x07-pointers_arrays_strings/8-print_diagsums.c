#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonal lines
 * @a: array
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, first_sum, second_sum;

	i = 0;
	first_sum = 0;
	second_sum = 0;

	while (i < size)
	{
		first_sum += a[i * size + i];
		second_sum += a[i * size + size - 1 - i];

		i++;
	}

	printf("%d, %d \n", first_sum, second_sum);
}
