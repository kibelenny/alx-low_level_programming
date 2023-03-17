#include "main.h"
/**
 * _calloc - allocate memory for array
 * @nemb: members of array
 * @size: size of members
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	undsigned int i;
	char *out;

	if (nemb == 0 || size == 0)
		return (NULL);
	out = malloc (nmemb * size);
	if (out == NULL)
		return (arr);
	for (i = 0; i < (nmemb * size); i++)
		out[i] = 0;
	return (out);
}
