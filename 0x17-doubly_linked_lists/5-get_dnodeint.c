#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to the head
 * @index: position to get
 *
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int temp = 0;

	while (current != NULL)
	{
		if (temp == index)
			return (current);
		current = current->next;
		temp++;
	}
	return (NULL);
}
