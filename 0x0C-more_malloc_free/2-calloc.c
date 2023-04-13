#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: array elements
 * @size: bytes
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *temp;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	temp = malloc(nmemb * size);

	if (temp == NULL)
		return (NULL);

	memset(temp, 0, nmemb * size);



	return (temp);

}
