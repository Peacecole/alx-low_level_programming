#include "lists.h"
/**
 * pop_listint - deletes the head node of the linked list listint_t
 * and returns the head node's data (n)
 * @head: double pointer to the linked list
 * Return: the deleted data or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_ptr;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp_ptr = (*head)->next;
	free(*head);
	*head = temp_ptr;

	return (num);
}
