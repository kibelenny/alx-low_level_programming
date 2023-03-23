#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	op_func = get_op_func(operator);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	return (result);
}
