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
	int array[42];
	int pass, counter, temp;
	srand(time(null));

	for ( counter = 0; i < 500; i++)
	{
		array[counter] = rand % 42;
		pass = pass + (array[counter] + '0');
		putchar(array[counter] + '0');

		if ((2772 - pass) - '0' < 42)
		{
			temp = 2772 - pass - '0';
			pass = pass + temp;
			putchar(temp + '0');
			break;
		}	
		return (0);
	}
