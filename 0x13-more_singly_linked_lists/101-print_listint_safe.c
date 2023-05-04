#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - counts the number of nodes in a looped linked
 * list listint_t
 * @head: pointer to the linked list
 * Return: 0 if the node is not looped or the number of nodes
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ptr1, *ptr2;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ptr1 = head->next;
	ptr2 = (head->next)->next;

	while (ptr2)
	{

		if (ptr1 == ptr2)
		{

			ptr1 = head;

			while (ptr1 != ptr2)
			{
				node++;
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}

			ptr1 = ptr1->next;

			while (ptr1 != ptr2)
			{

				node++;
				ptr1 = ptr1->next;
			}

			return (node);
		}

		ptr1 = ptr1->next;
		ptr2 = (ptr2->next)->next;
	}

	return (0);
}
/**
 * print_listint_safe - prints the content of the linked  list listint_t
 * @head: pointer to the linked list
 * Return: interger value number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{

	size_t node, i = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{

		for (; head != NULL; node++)
		{

			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{

		for (i = 0; i < node; i++)
		{

			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
