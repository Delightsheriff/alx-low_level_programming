#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: argument
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
