#include "stdlib.h"
#include <stdio.h>
/**
 * main - Entry
 *
 * @argc: argument count
 * @argv: argument values vector.
 *
 * Return: 1 for error
 */
int main(int argc, char *argv[])
{
	int argcount;
	int strnum;
	int result = 0;
	int buf;

	for (argcount = 1; argcount < argc; argcount++)
	{
		buf = 0;
		for (strnum = 0; argv[argcount][strnum] != '\0'; strnum++)
		{
			if (argv[argcount][strnum] >= '0' && argv[argcount][strnum] <= '9')
			{
				buf = buf * 10  + argv[argcount][strnum] - '0';
			}
			else
			{
				printf("Error \n");
				return (1);
			}

		}
	result = result + buf;
	}
	printf("%d\n", result);
	return (0);
}
