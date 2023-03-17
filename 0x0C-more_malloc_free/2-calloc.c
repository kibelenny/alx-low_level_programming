#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for array
 * @nemb: members of array
 * @size: size of members
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *out;

	if (nmemb == 0 || size == 0)
		return (NULL);
	out = malloc (nmemb * size);
	if (out == NULL)
		return (out);
	for (i = 0; i < (nmemb * size); i++)
		out[i] = 0;
	return (out);
}
