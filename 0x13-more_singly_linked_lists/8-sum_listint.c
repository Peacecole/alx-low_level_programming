#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a linked list listint_t
 * @head: pointer to the linked list whose data is to be summed
 * Return: sum or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp_ptr = head;

	while (temp_ptr)
	{
		sum += temp_ptr->n;
		temp_ptr = temp_ptr->next;
	}

	return (sum);
}
