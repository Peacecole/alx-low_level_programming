#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all
 * the arguments of your program.
 * @ac: argument counter
 * @av: argument
 * Return: always 0
 */
char *argstostr(int ac, char **av)
{
	int c = 0, x = 0, y = 0, z = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		while (av[x][y])
		{
			c++;
			y++;
		}

		y = 0;
		x++;
	}

	p = malloc((sizeof(char) * c) + ac + 1);

	x = 0;

	while (av[x])
	{
		while (av[x][y])
		{
			p[z] = av[x][y];
			z++;
			y++;
		}
		p[z] = '\n';

		y = 0;
		z++;
		x++;
	}

	z++;
	p[z] = '\0';
	return (p);
}
