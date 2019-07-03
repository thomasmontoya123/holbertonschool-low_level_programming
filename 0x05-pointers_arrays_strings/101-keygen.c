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
	int array[1000];
	int pass, counter, temp;
	srand(time(NULL));

	for ( counter = 0; counter < 1000; counter++)
	{
		array[counter] = rand() % 42;
		pass = pass + (array[counter] + '0');
		putchar(array[counter] + '0');

		if (2772 - pass -  '0' < 42)
		{
			temp = 2772 - pass - '0';
			pass = pass + temp;
			putchar(temp + '0');
			break;
		}	
		return (0);
	}
}
