#include "main.h"
#include <stdio.h>
/**
 * _strchr - finds if char occurs in string
 *
 * @s: string to check
 * @c: character to find in s
 *
 * Return: pointer to first instance of char to find in s
 */
char *_strchr(char *s, char c)
{

	int count = 0;

	while (*(s + count))
	{

		if (*(s + count) == c)

			return (s + count);
		count++;
	}

	if (*(s + count) == c)

		return (s + count);

	return (NULL);
}
