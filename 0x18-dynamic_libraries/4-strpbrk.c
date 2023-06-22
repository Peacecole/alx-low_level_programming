#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches string for set of bytes
 *
 * @s: string to check
 * @accept: substring of chars
 *
 * Return: pointer to string being searched
 */
char *_strpbrk(char *s, char *accept)
{

	int count;

	while (*s)
	{

		count = 0;

		while (*(accept + count) != '\0')
		{

			if (*(accept + count) == *s)

				return (s);

			count++;
		}

		s++;
	}

	return (0);
}
