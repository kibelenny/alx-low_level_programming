#include "lists.h"

/**
 * sum_listint - Sum of all elements in a linked list
 * @head: linked list
 * Return: sum of elements in list
 */

int sum_listint(listint_t *head)
{
	int count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
