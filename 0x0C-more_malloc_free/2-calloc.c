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
	void *temp = malloc(nmemb);

	temp = calloc(nmemb, size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (temp == NULL)
		return (NULL);



	return (temp);

}
