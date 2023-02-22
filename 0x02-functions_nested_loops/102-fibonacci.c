#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib3, count;

	printf("%d, %d", fib1, fib2);

	for (count = 0; count < 48; count++)
	{
		fib3 = fib1 + fib2;
		printf(", %d", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}

	printf("\n");

	return (0);
}
