#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates or joins two strings
 * @s1: first string
 * @s2: second string
 * Return: two strings
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, x = 0, y = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	y = i + j;
	p = malloc((sizeof(char) * y) + 1);

	if (p == NULL)
		return (NULL);

	j = 0;

	while (x <= y)
	{
		if (x <= i)
			p[x] = s1[x];
		if (x >= i)
		{
			p[x] = s2[j];
			j++;
		}
		x++;
	}
	p[x] = '\0';
	return (p);
}
