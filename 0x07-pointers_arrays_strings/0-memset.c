#include "main.h"
/**
 * *_memset - fills memory at s with b
 * @s: src in mem
 * @b: byte to fill
 * @n: bytes to fill in s
 * Return: s with b
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
