#include "main.h"
/**
 * rev_string - reverses a string
 * @s: To be reversed
 * Return: none
 */
void rev_string(char *s)
{
	char temp;
	int i, len0 = 0, len1 = 0;

	while (s[len0] != '\0')
	{
		len0++;
	}

	len1 = len0 - 1;

	for (i = 0; i < len0 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
