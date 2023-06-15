
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block to a new size.
 * @ptr: Pointer to the memory block to be reallocated.
 * @old_size: The previous size of the memory block in bytes.
 * @new_size: The desired new size of the memory block in bytes.
 *
 * Return: A pointer to the reallocated memory block, or NULL if
 * the reallocation failed.
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *buff;
	char *buff1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	buff = malloc(new_size);
	if (!buff)
		return (NULL);

	buff1 = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			buff[i] = buff1[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			buff[i] = buff1[i];
	}

	free(ptr);
	return (buff);
}

