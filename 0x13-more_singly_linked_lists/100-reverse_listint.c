#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: linked list
 *
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *previous = NULL, *next = NULL;

	if (*head != NULL)
	{
		while (current != NULL)
		{
			next = current->next;
			current->next = previous;
			previous = current;
			current = next;
		}
		*head = previous;
	}
	return (NULL);
}
