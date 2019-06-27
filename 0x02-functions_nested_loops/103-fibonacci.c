#include <stdio.h>
/**
* main - descrip
*Return: 0 (success)
*/
int main(void)
{
	long a, b, c, d, top;

	top = 4000000;

	a = 1;

	b = 2;

	c = 0;

	d = 0;

	while (a < max && b < max)
	{
		if ((b % 2) == 0)
			c += b;
			d = a + b;
			a = b;
			b = d;
	}
	printf("%ld\n", c);
	return (0);
}
