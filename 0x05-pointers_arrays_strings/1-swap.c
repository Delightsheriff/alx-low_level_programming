#include "main.h"

/**
 * swap_int - swaps the two arguments
 * @a: first argument
 * @b: second argument
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
