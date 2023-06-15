#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - Creates a new character array of the specified size and
 *                initializes all elements with the given character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the newly created character array, or NULL if the
 *         allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int k = 0;

	buffer = malloc(sizeof(char) * size);
		if (buffer != NULL)
		{
		while (k < size)
		{
		buffer[k] = c;
		k++; }
		}
		return (buffer);
}
