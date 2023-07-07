#include "hash_tables.h"

/**
 * hash_djb2 - hash function that implements the djb2 algorithm.
 * @str: pointer to the string to hash.
 *
 * Return: algorithm.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h; /* h rep the hash int*/
	int c;

	h = 5381;
	while ((c = *str++))
		h = ((h << 5) + h) + c; /* h * 33 + c */

	return (h);
}
