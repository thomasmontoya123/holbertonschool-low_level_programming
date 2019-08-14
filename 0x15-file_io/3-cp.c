#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
* main - check the code for Holberton School students.
* @ac: argument counter
* @av: argument value
* Return: Always 0.
*/
int main(int ac, char **av)
{
	int from, to, fromClose, toClose, writeLen, readLen;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((readLen = read(from, buffer, 1024)) != 0)
	{
		if (readLen == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

		writeLen = write(to, buffer, readLen);
		if (writeLen == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	fromClose = close(from);
	if (fromClose == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);

	toClose = close(to);
	if (toClose == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);

	return (0);
}

