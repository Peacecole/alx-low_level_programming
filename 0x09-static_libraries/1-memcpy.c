#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copys n bytes of memory
 *
 * @dest: pointer to dest
 * @src: source to be copied from
 * @n: num bytes to copy from src
 *
 * Return: pointer to beginning
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int count = 0;
	char *ptr = dest;

	while (count < n)
	{

		*dest++ = *src++;
		count++;
	}

	return (ptr);
}
