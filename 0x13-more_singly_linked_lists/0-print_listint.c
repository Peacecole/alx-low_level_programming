#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: pointer to the list whose elements are being printed
 * Return: integer value for number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0; /** number of nodes*/

	while (h)
	{
		printf("%d\n", h->n);
		n++;

		h = h->next;
	}

	return (n);
}
