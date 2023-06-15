#include "lists.h"

/**
 * add_dnodeint_end -  a function that adds a new node
 * at the end of a dlistint_t list
 * @head: head of linked list
 * @n: value to be in new node
 *
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;

		new_node->prev = current;
	}
	return (new_node);
}
