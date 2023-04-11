#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary
 * Return: value in base10 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res = res * 2 + (b[i] - 48);
	}
	return (result);
}
