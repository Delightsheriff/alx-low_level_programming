#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int button;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0, button = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			if (button == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			while ((temp = temp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
			}

			button = 1;
		}
	}

	printf("}\n");
}
