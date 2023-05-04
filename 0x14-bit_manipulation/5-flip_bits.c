#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: number to be evaluated
 * @m: new number after fliping
 * Return: interger
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current_num;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j++)
	{
		current_num = exclusive >> j;

		if (current_num & 1)
			count++;
	}

	return (count);
}
