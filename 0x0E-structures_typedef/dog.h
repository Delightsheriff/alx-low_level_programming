#ifndef MY_STRUCT_H
#define MY_STRUCT_H

/**
 * struct dog - Poppy
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

