#include "main.h"

/**
 * factorial - returns factorial of int
 * @n: int to factorize
 * Return: n factorize
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1)
	else (n > 0)
		return factorial(n - 1);
}
