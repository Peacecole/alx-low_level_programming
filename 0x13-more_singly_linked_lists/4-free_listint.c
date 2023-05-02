#include "lists.h"
/**
 * free_listint - frees the linked list listint_t
 * @head: pointer to the list to be freed
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp_ptr;

	while (head)
	{
		temp_ptr = head->next;
		free(head);
		head = temp_ptr;
	}
}
