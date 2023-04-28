#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - add a new node at the end of a linked list
 * @head: double pointer list list_t
 * @str: pointer to string to be added in the new node
 * Return:  new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp_ptr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
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
