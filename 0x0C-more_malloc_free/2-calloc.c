#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb:
 * @size: size of memory
 * Return: always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, y = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	ptr = malloc(y);

	if (ptr == NULL)
		return (NULL);

	while (x < y)
	{
		ptr[x] = 0;
		x++;
	}

	return (ptr);
}
