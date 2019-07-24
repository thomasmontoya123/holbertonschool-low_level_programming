#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main -  performs simple operations
 * @argc: argument counter
 * @argv: argument values
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int a, b;
	int result;
	char *opFunction, op;
	int (*action)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2][0];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argv[2][1] != '\0' && (op != '+'
	|| op != '-' || op != '*' || op != '/' || op != '%'))
	{
		printf("Error\n");
		exit(98);
	}

	if (b == 0 && (op == '/' || op == '%'))
	{
		printf("Error\n");
		exit(98);
	}

	opFunction = argv[2];
	action = get_op_func(opFunction);
	result = (*action)(a, b);
	printf("%i\n", result);

	return (0);

}
