#include "main.h"
/**
 * print_to_98 - Print from n to 98
 * @n: number to start
 * Return: None
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar (i / 10 + '0');
			_putchar (i % 10 + '0');
			if (i != 98)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
	} else
	{
		for (i = n; i >= 98; i--)
		{
			if (i >=100)
			{
				_putchar(i / 100 + '0');
				_putchar((i % 100)/10 + '0');
				_putchar(i % 10 + '0');
			} else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
