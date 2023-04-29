#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: first argument
 * @n: data
 *
 * Return: List_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	while (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;
		*head = new;

		return (new);
	}
	return (NULL);
}
