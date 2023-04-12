#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: one dimension of array
 * @height: another dimension of array
 * Return: integer value
 */
int **alloc_grid(int width, int height)
{
	int i, j, x, y;
	int **p_a;

	if (width <= 0 || height <= 0)
		return (NULL);

	p_a = malloc(sizeof(int *) * height);

	if (p_a == NULL)
	{
		free(p_a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p_a[i] = malloc(sizeof(int) * width);

		if (p_a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(p_a[j]);
			}

			free(p_a);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			p_a[x][y] = 0;
		}
	}

	return (p_a);
}
