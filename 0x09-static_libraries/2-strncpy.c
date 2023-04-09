#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function that copies a string to another
 * @dest: destination string
 * @src: source string
 * @n: count integer
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
