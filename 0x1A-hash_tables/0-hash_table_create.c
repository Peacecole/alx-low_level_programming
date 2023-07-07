#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: The size of the array to be created.
 *
 * Return: a pointer to the new hash table or NULL
 *	incase of an error.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;

	return (hash_t);
}
