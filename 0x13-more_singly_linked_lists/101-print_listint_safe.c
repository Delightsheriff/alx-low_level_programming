#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: linked list
 *
 * Return: size_t
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
