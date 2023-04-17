#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - struct dog
 * @d: struct pointer
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
