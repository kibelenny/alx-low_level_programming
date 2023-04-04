#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}
