#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of list
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr = head, *prev;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		count++;

		prev = curr;
		curr = curr->next;

		if (curr >= prev)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;
		}
	}

	return (count);
}
/**
 * free_list - frees a listint_t linked list.
 * @head: pointer to the beginning of the list
 */
void free_list(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return;
	current = *head;
	*head = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
