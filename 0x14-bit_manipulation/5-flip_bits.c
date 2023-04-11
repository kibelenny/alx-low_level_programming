#include "main.h"

/**
 * flip_bits - Returns how many bits we should flip
 * @n: first number to compare
 * @m: second number to compare
 * Return: values to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0, i;
	unsigned long int diff = n ^ m;

	for (i = 0; i < 64; i++)
	{
		res += (diff & 1);
		diff >>= 1;
	}
	return (res);
}
