#include "main.h"
/**
 * create_array - create an array of size init by c
 * @size: size of an array
 * @c: storage char
 * Return: NULL if fails, pointer if ok
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(c) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (d);
}
