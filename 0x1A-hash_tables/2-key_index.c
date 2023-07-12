#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: key of key/value pair
 * @size: size of array of the hash table
 * Return: index where values are stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
