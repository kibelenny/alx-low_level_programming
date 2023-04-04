#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at certain index
 * @head: linked list
 * @idx: index to add node
 * @n: node to add;
 * Return: address of new node, NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (i != idx - 1)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		i++;
		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;
	return *head;
}
