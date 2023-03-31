#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a node to the end of a list
 * @head: pointer to first element in linked list
 * @str: string to add to list
 * Return: address of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *copied_str = strdup(str);

	if (new_node == NULL || copied_str == NULL)
	{
		free(new_node);
		free(copied_str);
		return (NULL);
	}

	new_node->str = copied_str;
	new_node->len = strlen(copied_str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while ((*head)->next != NULL)
		(*head) = (*head)->next;

	(*head)->next = new_node;
	return (new_node);
}
