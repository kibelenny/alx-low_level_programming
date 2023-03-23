#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator of numbers
 * @n: number of integers passed
 * Return: void
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(va_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
