#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: integer typr
 * @c: character to be created
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
		ptr[x] = c;
	return (ptr);
}
