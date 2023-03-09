#include "main.h"

/**
 * prime - detects if number is prime
 * @n: input int
 * @c: iterations
 * Return: 1 if prime, 0
 */
int prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, c + 1));
}

/**
 * is_prime_number - detects if no is prome
 * @n: input integer
 * Return: 1 if prime, 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
