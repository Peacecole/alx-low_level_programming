#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a dog structure
 * @d: a dog structure
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner name
 * Return: always 0
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
