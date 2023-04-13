#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer type
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, x = 0, y = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[x])
		x++;

	if (n >= x)
		y = i + x;
	else
		y = i + n;

	str = malloc(sizeof(char) * y + 1);
	if (str == NULL)
		return (NULL);

	x = 0;
	while (j < y)
	{
		if (j <= i)
			str[j] = s1[j];

		if (j >= 1)
		{
			str[j] = s2[x];
			x++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
