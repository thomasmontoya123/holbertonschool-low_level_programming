#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
long sum = 0;
long first = 0;
long sec = 1;
long a = 1;


do {
if (a % 2 == 0)
sum = sum + a;
printf("%li (%li), ", a, sum);
first = sec;
sec = a;
a = first + sec;

} while (a < 4000001);

printf("%li\n", sum);

return (0);
}
