#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
	size_t sen;
	int k, ead;

	if (filename == NULL)
	return (-1);
	if (text_content == NULL)
	{
	sen = strlen(text_content);
	}
	k = open(filename, O_WRONLY | O_APPEND);
	if (k == -1)
	{
	return (-1);
	}
	ead = read(k, text_content, sen);
	if (ead == -1)
	{	close(k);
		return (-1);
	}
		return (1);
}
