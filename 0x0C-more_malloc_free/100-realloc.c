#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous memory
 * @old_size: size in bytes
 * @new_size: new size in bytes
 *
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		temp = malloc(new_size);

		if (temp == NULL)
		{
			return (NULL);
		}
		return (temp);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	temp = malloc(new_size);

	if (temp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		temp[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (temp);
}
