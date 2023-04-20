#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a newline
 * @separator: a seperator
 * @n: count
 *
 * Return: integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int temp;

	va_start(args, n);

	if (separator == NULL)
	{
		printf(" ");
	}

	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, int);

		printf("%d", temp);
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
