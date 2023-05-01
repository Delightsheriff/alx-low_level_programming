#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_list(lista_t **head)
{
	lista_t *current, *temp;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a SLL
 * @head: double pointer to the head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	lista_t *hptr, *new_node, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(lista_t));

		if (new_node == NULL)
			exit(98);

		new_node->s = (void *)head;
		new_node->next = hptr;
		hptr = new_node;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->s)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&hptr);
				return (node_count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_count++;
	}

	free_list(&hptr);
	return (node_count);
}
