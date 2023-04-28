#include "lists.h"
#include <stdlib.h>
/**
 * list_len - prints the number of elements in a linked list
 * @h: pointer to the list_t
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
