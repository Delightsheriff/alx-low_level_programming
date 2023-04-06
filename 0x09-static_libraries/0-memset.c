#include "main.h"

/**
 * _memset - function that fills n bytes of the memory area.
 * @s: memory area argument
 * @b: constant byte
 * @n: bytes of memory
 *
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
