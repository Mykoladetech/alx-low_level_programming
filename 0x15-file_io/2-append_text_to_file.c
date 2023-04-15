#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: The name of the file to append to.
 * @text_content: The text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0, ead = 0;

	if (filename == NULL)
	return (-1);


	if (text_content != NULL)
	{
		while (*(text_content + len) != '\0')
		len++;

	file = open(filename, O_WRONLY | O_CREAT | O_APPEND, 00600);
		if (file == -1)
	{
		return (-1);
	}

	ead = write(file, text_content, len);
	if (ead == -1)
	{
		return (-1);

		close(file);
	}

	}
		return (1);

}
