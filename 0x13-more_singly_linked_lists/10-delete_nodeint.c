#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given index of the
 * list listint_t
 * @head: double pointer to the linked list whose node is to be deleted
 * @index: the index of the node to be deleted
 * Return: integer value, 1 if successful, -1 if not successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_ptr = *head;
	listint_t *ptr_current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_ptr);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp_ptr || !(temp_ptr->next))
			return (-1);

		temp_ptr = temp_ptr->next;
		i++;
	}

		ptr_current = temp_ptr->next;
		temp_ptr->next = ptr_current->next;
		free(ptr_current);

		return (1);
}
