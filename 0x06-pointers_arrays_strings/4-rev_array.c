#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: an array pointer
 * @n: second argument
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}

}
