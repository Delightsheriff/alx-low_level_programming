#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked list
 * @h: argument
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

