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
int c;

a = '0';
b = '0';
c = '0';

while (a <= '9')
{
while (b <= '9')
{
while (c <= '9')
{
putchar(a);
putchar(b);
putchar(c);
if (a == '9' && b == '9' && c == '9')
{
putchar ('\n');
}
else
{
putchar(',');
putchar(' ');
}
c++;
}
c = '0';
b++;
}
b = '0';
a++;
}
return (0);
}
