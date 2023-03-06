#inlcude "main.h"
/**
 * *_strchr - locate char in str
 * @s: string to filter
 * @c: char to find
 * Return: letter found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
