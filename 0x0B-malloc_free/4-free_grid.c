#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: grid to be freed
 * @height: one dimension of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int num;

	for (num = 0; num < height; num++)
	{
		free(grid[num]);
	}

	free(grid);

}
