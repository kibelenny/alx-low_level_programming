#include "lists.h"

/**
 * listint_len - Length of list
 * @h: linked list
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NUL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
