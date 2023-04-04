#include "lists.h"

/**
 * pop_listint - pops the first element in linked list
 * @head: linked list
 * @Return: Value of popped element
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int pop;

	if (*head == NULL)
	{
		return (0);
	}

	pop = current->n;
	(*head)->next = current->next;
	free(current);
	return (pop);
}
