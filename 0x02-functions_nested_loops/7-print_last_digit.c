#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: number to be used
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	_putchar (n % 10 + '0');
	return (n % 10);
}
