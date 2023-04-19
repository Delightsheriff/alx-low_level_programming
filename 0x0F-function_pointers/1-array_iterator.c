#include "function_pointers.h"

/**
 * array_iterator - exectutes a function given as a parameter on each element
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL && array != NULL && size > 0)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
