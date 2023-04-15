#include <stdio.h>
#include <stdlib.h>
#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t ear, rint;
	char *buf_f = malloc(sizeof(char)*letters+1);
	FILE *file;
	file = fopen(filename, "O_RDONLY");
		if(file < 0)
		return (0);
	ear = fread (buf_f, sizeof(char), letters, file);
	rint = fwrite (buf_f, sizeof(char), letters, ear);
	

	free(buf_f);
	fclose(file);
	return (rint);
	


}
