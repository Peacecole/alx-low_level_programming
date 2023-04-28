#include  "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the list_t elements
 * @h: pointer to the list
 * Return: string
 */
size_t print_list(const list_t *h)
{
	size_t list = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		list++;
	}

	return (list);
}

