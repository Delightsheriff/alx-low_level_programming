#include "main.h"
#include <ctype.h>

/**
 * print_buffer - prints a bufer
 * @b: first argumen
 * @size: second argument
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10 && j < size; j++)
		{
			printf("%02x ", b[j] & 0xff);
		}
		for (; j < i + 10; j++)
		{
			printf("   ");
		}
		printf(" ");
		for (j = i; j < i + 10 && j < size; j++)
		{
			printf("%c", isprint(b[j]) ? b[j] : '.');
		}
		printf("\n");
	}
	if (size <= 0)
	{
		printf("\n");
	}
}
