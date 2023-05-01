#include "lists.h"

/**
 * free_list2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_list2(lista_t **head)
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
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	lista_t *temp, *new, *add;
	listint_t *current;

	temp = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(lista_t));

		if (new == NULL)
			exit(98);

		new->s = (void *)*h;
		new->next = temp;
		temp = new;

		add = temp;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->s)
			{
				*h = NULL;
				free_list2(&temp);
				return (i);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		i++;
	}

	*h = NULL;
	free_list2(&temp);
	return (i);
}
