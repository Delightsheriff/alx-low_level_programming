#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 *
 * Return: integer
 */
int get_endianness(void)
{
	unsigned int x = 0x12345678;
	unsigned char *p = (unsigned char *)&x;

	return (*p == 0x78) ? 1 : 0;
}
