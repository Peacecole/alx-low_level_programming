#include "main.h"
#include <stdio.h>
/**
 * _strspn - finds length of prefix substring
 *
 * @s: string to check
 * @accept: substring of chars
 *
 * Return: n bytes in substring
 */
unsigned int _strspn(char *s, char *accept)
{

	int count;
	int x = 0;
	int y;

	while (*s)
	{

		count = 0;
		y = x;

		while (*(accept + count) != '\0')
		{

			if (*(accept + count) == *s)
			x++;
			count++;
		}

		if (y == x)
		break;

		s++;
	}

	return (x);
}
