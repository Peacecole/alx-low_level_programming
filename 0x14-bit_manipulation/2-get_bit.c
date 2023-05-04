#include "main.h"
#include <stdio.h>
/**
 * get_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to a the number whose bit is to be set to 1
 * @index: index to the bit to be set to 1
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
