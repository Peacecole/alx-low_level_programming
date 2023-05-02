#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: double pointer to the list to add a new node to
 * @n: number of nodes in the listint_t
 * Return: nothing
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

			if (!new_node)
			return (NULL);

			new_node->n = n;
			new_node->next = *head;
			*head = new_node;

			return (new_node);
}
