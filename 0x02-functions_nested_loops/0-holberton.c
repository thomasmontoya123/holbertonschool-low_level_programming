#include "holberton.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
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
