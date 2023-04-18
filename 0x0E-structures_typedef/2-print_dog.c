#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a structure dog
 * @d: structure dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->name == NULL)
		d->name = "(nil)";

	printf("Name: %s\nName: %f\nAge: %s\n", d->name, d->age, d->owner);
}
