#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: pointer to head  of list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
