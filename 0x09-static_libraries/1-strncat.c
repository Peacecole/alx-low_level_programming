#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two string with at most n bytes
 * @dest: pointer to destination string
 * @src: source of string to be merged
 * @n: counter integer
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
