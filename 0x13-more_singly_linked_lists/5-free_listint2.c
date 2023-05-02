#include "lists.h"
/**
 * free_listint2 - frees a linked list, sets head to NULL
 * @head: double pointer to the linked list to be freed
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_ptr = (*head)->next;
		free(*head);
		*head = temp_ptr;
	}

	*head = NULL;
}
