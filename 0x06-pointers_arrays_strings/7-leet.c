#include "main.h"
/**
 * leet - encode to 1337
 * @s: input str
 * Return: output
 */
char *leet(char *s)
{
	int i, j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str1[j])
			{
				s[i] = str2[j];
				break;
			}
		}
	}
	return (n);
}
