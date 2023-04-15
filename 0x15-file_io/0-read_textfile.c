#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf_k;
	ssize_t mk;
	ssize_t wr;
	ssize_t te;

	mk = open(filename, O_RDONLY);
	if (mk == NULL)
		return (0);
	buf_k = malloc(sizeof(char) * letters);
	te = read(mk, buf_k, letters);
	wr = write(STDOUT_FILENO, buf_k, te);

	free(buf_k);
	close(mk);
	return (wr);
}

