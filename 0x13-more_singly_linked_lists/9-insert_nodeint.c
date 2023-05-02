#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position in a list
 * @head: double pointer to the list
 * @idx: index of the list where the new node is to be added
 * @n: integer value for the number of the nodes
 * Return: address of the new node or NULL when not successful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node;
	listint_t *temp_ptr = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	for (j = 0; temp_ptr && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_node->next = temp_ptr->next;
			temp_ptr->next = new_node;
			return (new_node);
		}
		else
			temp_ptr = temp_ptr->next;
	}

	return (NULL);

}
