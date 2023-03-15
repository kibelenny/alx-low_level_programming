#include <stdio.h>

/**
 * main - prints all argv
 * @argc: number of command line args
 * @argv: args in command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
