#include "main.h"

/**
 * set_bit - sets 1 to bit at index
 * @n: value whose bit is to be set
 * @index: index to set bit
 * Return: 1 if success, -1
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);
	return (1);
}
