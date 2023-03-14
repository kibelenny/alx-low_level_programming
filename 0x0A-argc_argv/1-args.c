#include <stdio.h>

/**
 * main - print args
 * @argc: number of command line args
 * @argv: args in command line
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	return (0);
}
