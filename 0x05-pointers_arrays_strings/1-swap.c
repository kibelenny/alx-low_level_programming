#include "main.h"
/**
 * swap_int - Swaps 2 int values
 * @a: First Int
 * @b: Second Int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
