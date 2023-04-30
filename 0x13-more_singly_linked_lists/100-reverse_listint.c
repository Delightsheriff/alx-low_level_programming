#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: linked list
 *
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next = NULL;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			next = *head;
			*head = (*head)->next;
			next->next = previous;
			previous = next;
		}
		*head = previous;
		return (*head);
	}
	return (NULL);
}
