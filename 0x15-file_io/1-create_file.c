#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - Appends text to the end of a file.
 *
 * @filename: The name of the file to append to.
 * @text_content: The text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int ear, rint = 0;
	int file;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
	while (*(text_content + rint) != '\0')
		rint++;

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
	{
	return (-1);
	}
	ear = write(file, text_content, rint);
	if (ear == -1)
	{
	close(file);
	return (-1);
	}

	}
	return (1);
}
