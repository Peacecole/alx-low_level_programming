#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the value whose bit is to be set to 0 at a
 * given index
 * @index: position of the bit to be set to 0
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (-(1UL << index) & *n);
	return (1);
}
