#include "main.h"
/**
 * power_op - return nat sqrt of a number
 * @n: input number
 * @c: iterator
 * Return: sqrt or -1
 */
int power_op(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_op(n, c + 1));
}

/**
 * _sqrt_recursion - return nat sqrt of number
 * @n: input number
 * Return: nat sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_op(n, 2));
}
