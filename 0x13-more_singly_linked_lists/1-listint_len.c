#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: pointer to the linked list be be evaluated
 * Return: interger value for the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0; /**the number of nodes in the list*/

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
