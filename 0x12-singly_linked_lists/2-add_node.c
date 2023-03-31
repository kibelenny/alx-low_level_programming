#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node to head of list
 * @head: double pointer to list
 * @str: pointer to string to add
 * Return: address to new linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *copied_str = strdup(str);

	if (new_node == NULL)
	{
		free(new_node);
		free(copied_str);
		return (NULL);
	}

	if (copied_str == NULL)
	{
		free(new_node);
		free(copied_str);
		return (NULL);
	}

	new_node->str = copied_str;
	new_node->len = strlen(copied_str);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
