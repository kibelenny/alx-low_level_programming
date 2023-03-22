#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: pointer to printer func

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
