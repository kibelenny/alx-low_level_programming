#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n elements of array
 * @a: array
 * @n: element
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));


		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
