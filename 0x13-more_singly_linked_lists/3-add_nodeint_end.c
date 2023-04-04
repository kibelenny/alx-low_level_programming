#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add  a node to the end of a list
 * @head: current linked list
 * @n: element to add to list
 * Return: linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		free(current);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	return (*head);
}
