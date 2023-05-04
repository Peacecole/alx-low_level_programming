#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: pointer to the binary number to be converted
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}

	return (dec);
}
