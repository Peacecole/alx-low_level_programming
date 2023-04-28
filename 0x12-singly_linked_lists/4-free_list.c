#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees the list list_t
 * @head: pointer to the list list_t
 * Return: NULL
 */
void free_list(list_t *head)
{
	list_t *temp_ptr;

	while (head)
	{
		temp_ptr = head->next;
		free(head->str);
		free(head);
		head = temp_ptr;
	}
}
