#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: pointer
 * Return: always 0
 */
char *_strdup(char *str)
{
	int x = 0, y = 1;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[y])
	{
		y++;
	}

	p = malloc((sizeof(char) * y) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	while (x < y)
	{
		p[x] = str[x];
		x++;
	}

	p[x] = '\0';
	return (p);
}
