#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry
 * @argc: number of command args
 * @argv: string of commands
 *
 * return: 0
 */

int main (int argc, char * argv[])
{
	int result;

	if (argc != 3)
	{
		printf ("Error \n");
		return (1);
	}

	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf ("%d \n", result);
	}


}
