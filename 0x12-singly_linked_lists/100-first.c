#include <stdio.h>
void advanced1(void) __attribute__((constructor));
/**
 * advanced1 - print a sentence
 * Return: void.
 */
void advanced1(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}

