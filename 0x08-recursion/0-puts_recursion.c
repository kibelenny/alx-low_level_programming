#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to use
 * Return: None
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	} else
		_putchar('\n');
}

