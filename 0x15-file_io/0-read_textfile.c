#include "holberton.h"
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it.
 * @filename: name of the file
 * @letters: number of letter it should read and print
 * Return: number of letters it could read and print, 0 if it fails.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fopenDescriptor, readCounter, writeCounter;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	fopenDescriptor = open(filename, O_RDONLY);

	if (fopenDescriptor == -1)
		return (0);

	 readCounter = read(fopenDescriptor, buffer, letters);


	writeCounter =  write(STDOUT_FILENO, buffer, readCounter);


	close(fopenDescriptor);

	free(buffer);


	return (writeCounter);
}
