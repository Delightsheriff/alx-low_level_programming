#include "search_algos.h"

/**
 * print_array - print the current array
 * @array: array to print
 * @size: increment up to this size
 * Return: Nothing
 */

void print_array(int *array, size_t size)
{
size_t i;

printf("Searching in array: ");
for (i = 0; i < size; i++)
{
printf("%d", array[i]);
if (i < size - 1)
{
printf(", ");
}
}
printf("\n");
}

/**
 * binary_search - binary search a ascending sorted array to find a value.
 * @array: pointer to first element in array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of matched value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
size_t left;
size_t right;
size_t mid;

if (array == NULL || size == 0)
{
return (-1);
}
left = 0;
right = size - 1;

print_array(array, size);
while (left <= right)
{
mid = (left + right) / 2;
if (array[mid] == value)
{
return (mid);
}
else if (value < array[mid])
{
right = mid - 1;
}
else
{
left = mid + 1;
}
print_array(array + left, right - left + 1);
}
return (-1);
}
