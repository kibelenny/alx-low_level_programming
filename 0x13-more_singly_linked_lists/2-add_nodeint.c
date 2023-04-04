#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node to beginning of list
 * @head: list to use
 * @n: element to add
 * Return: linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
