#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to bit whose value is to be set to 1 at a
 * given index
 * @index: the position of the bit to be set to 1
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
