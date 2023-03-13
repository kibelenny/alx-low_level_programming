#include "main.h"

/**
 * _strdup - return a pointer to a str copied
 * @str: string to copy
 * Return: pointer to copied str
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, count = 0;

	if (str == NULL)
		return (NULL);
	while(str[count] != '\0')
		count++;

	p = malloc(sizeof(str) * count);

	if (p == NULL)
		return (NULL);
	for (i = 0; i <= count; i++)
		p[i] = str[i];
	return (p);
}
