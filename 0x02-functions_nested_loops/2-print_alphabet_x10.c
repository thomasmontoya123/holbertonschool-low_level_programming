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
print_alphabet_x10();
return (0);
}

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
