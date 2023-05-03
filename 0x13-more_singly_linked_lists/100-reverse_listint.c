#include "lists.h"
/**
 * reverse_listint - reverses the linked list listint_t
 * @head: double pointer to the linked list listint_t
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next;
	}

	*head = prev_node;

	return (*head);
}
