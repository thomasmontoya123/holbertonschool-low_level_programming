#include "holberton.h"
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a file.
 *
 * @filename: name of the file
 * @text_content: text for the file.
 *
 * Return: 1 on succes -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int descriptorFlag, size, writeFlag;

	if (!filename)
		return (-1);

	descriptorFlag = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (descriptorFlag == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(descriptorFlag);
		return (1);
	}

	for (size = 0; text_content[size]; size++)
		;

	writeFlag =  write(descriptorFlag, text_content, size);

	if (writeFlag == -1)
	{
		write(1, "fails", 5);
		return (-1);
	}

	return (1);

}
