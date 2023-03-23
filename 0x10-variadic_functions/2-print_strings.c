#include "variadic_functions.h"

/**
 * print_strings - prints strongs
 * @separator: string to be printed between string
 * @n: args passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", seapartor);
	}

	printf("\n");
	va_end(valist);
}
