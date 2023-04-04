#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal sums of square matrix
 *
 * @a: square matrix of integers
 * @size: col & row size of matrix
 *
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{

	int x, sum1, sum2, diag1, diag2, row;

	x = 0;
	sum1 = 0;
	sum2 = 0;
	diag1 = 0;
	diag2 = 0;
	row = 0;

	while (x < size * size)
	{

		if (x == diag1 + (row * size))

			sum1 += a[x];

		if (x == (size - diag2 - 1) + (row * size))

			sum2 += a[x];

		if (((x + 1) % size) == 0)

			row++;
			diag1++;
			diag2++;
			primC++;
	}

	printf("%d", sum1);
	printf("%d\n", sum2);
}
