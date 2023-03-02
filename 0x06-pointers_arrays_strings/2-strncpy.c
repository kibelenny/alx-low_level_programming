#include "main.h"
/**
 * *_strncpy - str copy to n
 * @dest: dest to copy to
 * @src: str to copy from
 * @n: limit
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return dest;
}