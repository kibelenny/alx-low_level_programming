#include "function_pointers.h"

/**
 * array_iterator - iterates over arrays and implements action
 * @array: array to loop over
 * @size: size of array
 * @action: what to do to each element
 * Return: null
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}

