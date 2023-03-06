#include "main.h"
/**
 * *_strstr - finds first occurrence of substring in str
 * @haystack: all string
 * @needle: the substring
 * Return: Pointer
 */
char* _strstr(char* haystack, char* needle)
{
	if (!*needle)
		return haystack;

	while (*haystack)
	{
		char* hay = haystack;
		char* ned = needle;

		while (*hay && *ned && *hay == *ned)
		{
			hay++;
			ned++
		}
		if (!*ned)
			return (haystack);
		haystack++;
	}
	return (0);
}

