#include "main.h"
/**
 * *cap_string - capitalize all words
 * @s: string
 * Return: capitalized
 */
char *cap_string(char *s)
{
	char sep_words[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i = 0, j;

	if (s[i] >= 'a' && s[i] <= 'z' && s[i] != '\0')
		s[i] -= 32;
	i++;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep_words[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + i] -= 32;
			}
		}
	}
	return (s);
}
