#include "holberton.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - alpahabet ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int a;
char letter;

for (a = 0; a < 10; ++a)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}

}
