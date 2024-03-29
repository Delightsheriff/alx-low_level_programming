#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *temp;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	temp = malloc(sizeof(hash_table_t));
	if (temp == NULL)
		return (NULL);
	temp->array = malloc(sizeof(hash_node_t *) * size);

	if (temp->array == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->size = size;
	for (i = 0; i < size; i++)
		temp->array[i] = NULL;
	return (temp);
}
