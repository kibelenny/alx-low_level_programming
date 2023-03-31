#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - Prints all elelments in a linked list
 * @h: pointer to linked list
 * Return: number of elements printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		} else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		h = h->next;
		count++;
	}
	return (count);
}
