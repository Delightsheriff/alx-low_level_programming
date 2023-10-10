#include "search_algos.h"

/**
 * binary_search - binary search a ascending sorted array to find a value.
 * @array: pointer to first element in array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of matched value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
size_t i = 0, low, mid, high = size - 1;

if (array == NULL || size == 0)
{
return (-1);
}

while (low <= high)
{
mid = (high + low) / 2;
i = low;
printf("Searching in array: ");
for (; i <= high; ++i)
{
if (i != low)
printf(", %d", array[i]);
else
printf("%d", array[i]);
}
printf("\n");
if (array[mid] < value)
low = mid + 1;
else if (array[mid] > value)
high = mid - 1;
else
return (mid);
}
return (-1);
}
