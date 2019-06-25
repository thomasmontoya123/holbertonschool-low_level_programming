#include "holberton.h"

/**
 * main -  holberton
 * Return: Always 0 (Success)
 */
int main(void)
{
char c[] = "Holberton";

int a;

for (a = 0; c[a] != '\0'; a++)
{
_putchar(c[a]);
}
_putchar('\n');
return (0);
}