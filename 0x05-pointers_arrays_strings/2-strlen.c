#include "main.h"
/**
 * _strlen - Length of string
 * @s: String to check
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
