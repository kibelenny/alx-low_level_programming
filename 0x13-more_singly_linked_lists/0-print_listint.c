#include <stdio.h>

/**
 * print_listint - Prints a linked list
 * @h: list to print
 * Return: number of elements printed
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
