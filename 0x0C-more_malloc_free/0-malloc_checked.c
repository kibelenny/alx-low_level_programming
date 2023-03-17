#include "main.h"
/**
 * malloc_checked - allocate memory
 * @b: integer
 * Return: none
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p != NULL)
		exit (98);
	return (t);
}
