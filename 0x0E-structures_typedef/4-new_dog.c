#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name:pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name;
	char *new_owner;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_name = malloc(strlen(name) + 1);
	new_owner = malloc(strlen(owner) + 1);

	if (new_name == NULL || new_owner == NULL)
	{
		free(new_dog);
		free(new_name);
		free(new_owner);
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
