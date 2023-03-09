#include "main.h"

/**
 * factorial - returns factorial of int
 * @n: int to factorize
 * Return: n factorize
 */

int factorial(int n)
{
	if (n > 0)
		return factorial(n - 1);
	return (0);
}
