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

	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}

	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d \n", result);
	}


}
