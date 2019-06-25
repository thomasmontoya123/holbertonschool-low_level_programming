#include "holberton.h"
/**
 * main -  Hello, World
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c[] = "Holberton";

int a;

a = 0;

while (a < 9)
{
_putchar(c[a]);
a++;
}
_putchar('\n');
return (0);
}
