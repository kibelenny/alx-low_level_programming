#include "main.h"

/**
 * get_bit - bit at a certain index
 * @n: number to get int from
 * @index: index to check
 * Return: bit at that index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
