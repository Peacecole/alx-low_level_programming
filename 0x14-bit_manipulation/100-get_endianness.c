#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * Return: integer
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) & x;

	return (*c);
}
