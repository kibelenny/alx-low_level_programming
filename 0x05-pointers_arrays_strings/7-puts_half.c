#include "main.h"
/**
 * puts_half - Prints half the string
 * @str: String to half
 * Return: None
 */
void puts_half(char *str)
{
	int i, count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	for (i = 0; i < count / 2; i++)
		_putchar(str[i]);
	_putchar('\n');
}
