#include "main.h"
/**
 * print_rev - Prints string in reverse
 * @s: input string
 * Return: none
 */
void print_rev(char *s)
{
	int str_length = 0;

	while (str_length > -1)
	{
		if (s[str_length] == '\0')
			break;
		str_length++;
	}
	for (str_length--; str_length >= 0; str_length--)
		_putchar(s[str_length]);
	_putchar('\n');
}
