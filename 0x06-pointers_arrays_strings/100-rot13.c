#include "main.h"
/**
 * rot13 - encode str to rot13
 * @s: input str
 * Return: rot13 str
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[j] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[i] == alphabet[i])
			{
				s[i] = rot13[i];
				break;
			}
		}
		j++;
	}
	return (s);
}
