#include "search_algos.h"

/**
 * linear_search - sequentially search an array for a value.
 * @array: pointer to first element in array to search i
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of matched value or -1 if error or it does not exist
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL || size == 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
