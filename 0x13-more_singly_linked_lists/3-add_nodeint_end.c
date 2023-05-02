#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the linked
 * list listint_t
 * @head: double pointer to the linked list
 * @n: interger value for the number of nodes in the linked list
 * Return: pointer to the new node or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_ptr = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_ptr->next)
		temp_ptr = temp_ptr->next;

	temp_ptr->next = new_node;

	return (new_node);
}
