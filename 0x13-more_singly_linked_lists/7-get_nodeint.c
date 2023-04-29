#include "lists.h"

/**
 * get_nodeint_at_index - prints the node at a certain index
 * @head: first argument
 * @index: the index
 *
 * Return: List_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			if (i == index)
				return (head);

			head = head->next;
			i++;
		}
	}
	return (NULL);
}
