#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - Reads and prints a text file to POSIX standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of letters that were read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf_k;
	ssize_t mk;
	ssize_t wr;
	ssize_t te;

	if (filename == NULL)
	{ return (0); }

	mk = open(filename, O_RDONLY);
	if (mk == -1)
		return (0);
	buf_k = malloc(sizeof(char) * letters);
	te = read(mk, buf_k, letters);
	wr = write(STDOUT_FILENO, buf_k, te);
	if (wr == -1 || wr != te)
	{ close(mk);
		free(buf_k);
		return (0);
	}

	free(buf_k);
	close(mk);
	return (te);
}

