#include <stdio.h>
/**
 * main -  prints the numbers from 1 to 100.
 * But for multiples of 3 print Fizz instead of the number
 * and for the multiples of 5 print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", a);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
