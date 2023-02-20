#include <stdio.h>
/**
 * main - using while loop
 * Return: 0
 */
int main(void)
{
	char c;
	while (c <= 'z') {
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
