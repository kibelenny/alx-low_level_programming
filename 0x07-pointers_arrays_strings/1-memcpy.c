#include "main.h"
/**
 * *_memcpy - copy from src to dest to nth value
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: char to copy
 * Return: copird str
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

