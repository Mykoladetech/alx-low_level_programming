#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		s[g] = b;
	}

	return (s);
}

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes
 * each, and returns a pointer to the allocated memory.
 * @nmemb: Number of elements to allocate memory for.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory block, or NULL on failure or if
 *         nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buff;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buff = malloc(size * nmemb);

	if (buff == NULL)
		return (NULL);

	_memset(buff, 0, nmemb * size);

	return (buff);
}

