#include "lists.h"

/**
 * free_list - frees list_t
 * @head: first argument
 *
 * Return: List_t
 */
void free_list(list_t *head)
{
	list_t *test;

	while (head != NULL)
	{
		test = head;
		head = head->next;
		free(test->str);
		free(test);
	}
}
