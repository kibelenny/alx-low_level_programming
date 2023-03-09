#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: string to use
 * Return: None
 */
void void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	} else
		_putchar('\n');
}
