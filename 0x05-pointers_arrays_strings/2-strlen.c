#include "main.h"
#include <stdio.h>
/**
 * _strlen - extablishes the length of a string
 * @str: the string whose length is to be established
 * Return: always 0
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
