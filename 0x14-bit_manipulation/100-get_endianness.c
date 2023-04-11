#include "main.h"

/**
 * get_endianness - checks if machine is big or small endian
 * Return: 0 if big, 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *p = (char *) & i;
	return(*p);
}
