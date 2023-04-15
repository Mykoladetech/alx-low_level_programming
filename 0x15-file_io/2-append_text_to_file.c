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
	if (filename == NULL)
	return (-1);

	int len_ss = 0;
	int ead;
	int file;

	if (text_content != NULL)
	{
		while (*(text_content + len_ss) = '\0')
		len_ss++;

	file = open(filename, O_WRONLY | O_CREAT | O_APPEND, 00600);
	ead = write(file, text_content, len_ss);
	if (file == -1 || ead == -1)
		return (-1);
		close(file);
	}
		return (1);
		close(file);
}
