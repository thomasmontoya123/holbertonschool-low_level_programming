#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry
 *
 * @argc: argument count
 * @argv: argument values vector.
 *
 * Return: 1 if error
 */
int main(int argc, char *argv[])
{
	int result;
	int i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			result = atoi(argv[1]) * atoi(argv[2]);
			printf("%d \n", result);
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);

	}

}
