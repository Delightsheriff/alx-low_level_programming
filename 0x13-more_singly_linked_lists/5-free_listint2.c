#include "lists.h"

/**
 * free_listint2 - frees listint_t
 * @head: first argument
 *
 * Return: List_t
 */
void free_listint2(listint_t **head)
{
	listint_t *test;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			test = (*head);
			*head = (*head)->next;
			free(test);
		}
	}
	else
	{
		return;
	}
	free(*head);
	head = 0;
}
