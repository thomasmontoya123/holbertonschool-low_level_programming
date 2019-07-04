#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - cracker.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int buf;
	int number = 0;
	int table[500];

	srand(time(NULL));

	for (a = 0; a < 500; a++)
	{
		table[a] = rand() % 43;
		number = number + (table[a] + '0');
		putchar(table[a] + '0');

		if ((2772 - number) - 0 < 43)
		{
			buf = 2772 - number - '0';
			number = number + buf;
			putchar(buf + '0');
			break;
		}
		
	}
	return(0);
}
