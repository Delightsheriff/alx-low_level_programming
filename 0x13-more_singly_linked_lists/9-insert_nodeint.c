#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: vardiadic list
 * @idx: index of the list
 * @n: argument
 *
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int i = 1;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			free(new);
			return (NULL);
			new->n = n;
		}
		if (idx > 0)
		{
			temp = *head;
			while (temp != NULL)
			{
				if (i == idx)
				{
					new->next = temp->next;
					temp->next = new;
					return (new);
				}
				temp = temp->next;
				i++;
			}

			if (idx > i)
			{
				return (NULL);
			}
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}
