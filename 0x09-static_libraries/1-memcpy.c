#include "main.h"

/**
 * _memcpy - copies n bytes from memory
 * @dest: a pointer
 * @src: memory area
 * @n: bytes of memory
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
