#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = '0';
	b = '0';

	while (a <= '9')
	{
	while (b <= '9')
	{

	putchar(a);
	putchar(b);
	if (a == '9' && b == '9')
	{
	putchar('\n');
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	b++;
	}
	b = '0';
	a++;
	}
	return (0);
}

