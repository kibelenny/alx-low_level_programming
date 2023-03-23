#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: list of all arg types passed
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && i != 0)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				str = va_arg(valist, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(valist);
}

