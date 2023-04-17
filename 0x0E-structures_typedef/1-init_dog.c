#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - struct dog
 * @d: struct
 * @name: pointer to a name value
 * @age: pointer to age value
 * @owner: pointer to owner value
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
