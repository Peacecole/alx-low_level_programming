#include "main.h"
#include <stdio.h>
/**
 * _memset - fills n bytes of memory
 *
 * @s: pointer to the begging of the memory
 * @b: constant byte to fill with
 * @n: num bytes to fill in
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int count = 0;
	char *ptr = s;

	while (count < n)
	{

		*s++ = b;
		count++;
	}

	return (ptr);
}
