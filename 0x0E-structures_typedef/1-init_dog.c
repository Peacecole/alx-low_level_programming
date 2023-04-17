#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a dog structure
 * @ptr: a dog structure
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner name
 * Return: always 0
 */
void init_dog(struct dog *ptr, char *name, float age, char *owner)
{
	if (ptr != NULL)
	{
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
	}
}
