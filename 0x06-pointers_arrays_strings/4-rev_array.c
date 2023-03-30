#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @arr: array.
 * @n: number of elements of the array.
 * Return: no return.
 */
void reverse_array(int *arr, int n)
{

	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{

		for (j = i + 1; j > 0; j--)
		{

			temp = *(arr + j);
			*(arr + j) = *(arr + (j - 1));
			*(arr + (j - 1)) = temp;
		}
	}
}
