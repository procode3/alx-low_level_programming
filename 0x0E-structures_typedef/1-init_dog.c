#include "dog.h"

/**
 * init_dog - initalizes the struct dog
 * @d: useless struct pointer
 * @name: pointer to name in struct
 * @age: age
 * @owner: pointer to owner in struct
 *
 * Return: always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d.name = name;
	d.age = age;
	d.owner = owner
}


