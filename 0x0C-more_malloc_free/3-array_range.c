#include "main.h"
#include <stdlib.h>

/**
 * array_range - create and array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to array, NULL
 */

int *array_range(int min, int max)
{
	int i, *out;

	if (min > max)
		return (NULL);

	out = malloc((max - min + 1) * sizeof(int));
	if (out == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		out[i] = min;

	return (out);
}
