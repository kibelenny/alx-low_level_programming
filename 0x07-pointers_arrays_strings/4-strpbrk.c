#include "main.h"
/**
 * *_strpbrk - search string for set of byte
 * @s: first string
 * @accept: string to check
 * Return: pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s[i]);
		}
	}
	return ('\0');
}
