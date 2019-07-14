#include <stdio.h>
/**
 * main - entry
 * @argc: number of command args
 * @argv: string of commands
 *
 * return: 0
 */

int main (int argc, char * argv[])
{
    (void) argv;
    printf ("%d\n", argc - 1);
    return (0);
}
