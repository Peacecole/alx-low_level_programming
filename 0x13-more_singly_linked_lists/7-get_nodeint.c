#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list listint_t
 * @head: pointer to the linked list whose nth node is to be returned
 * @index: index for the nodes in the linked list
 * Return: the nth node, if node doesnt exit, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp_ptr = head;

	while (temp_ptr && j < index)
	{
		temp_ptr = temp_ptr->next;
		j++;
	}

	return (temp_ptr ? temp_ptr : NULL);
}

