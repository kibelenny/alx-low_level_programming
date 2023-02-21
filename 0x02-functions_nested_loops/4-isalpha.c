#include "main.h"
/**
 * _isalpha(int c) - checks for uppercase
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
