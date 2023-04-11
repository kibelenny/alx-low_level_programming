#include "main.h"

/**
 * clear_bit - clears a bit at a certain index
 * @n: value to get int from
 * @index: index to change to 0
 * Return: 1 if success, -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
