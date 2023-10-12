#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers, uses the Linear search algorithm
 *
 * @array: array to be searched
 * @size: size of the array being searched
 * @value: value to search for
 * Return: -1 if NULL or not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}