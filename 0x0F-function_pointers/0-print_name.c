#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: pointer to name
 * @f: callback function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
