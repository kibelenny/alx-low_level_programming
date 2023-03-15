#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints sum of +ve args
 * @argv: list of args
 * @argc: number of args
 * Return: 0 if success, 1
 */

int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num < 0)
			continue;
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
