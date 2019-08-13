#include "holberton.h"
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: text for the file.
 *
 * Return: 1 on succes -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int descriptorFlag, size, writeFlag;

	if (!filename)
		return (-1);

	descriptorFlag = open(filename, O_WRONLY | O_APPEND);

	if (descriptorFlag == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (size = 0; text_content[size]; size++)
		;

	writeFlag = write(descriptorFlag, text_content, size);
	if (writeFlag == -1)
		return (-1);


	close(descriptorFlag);

	return (1);
}
