#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly duplicated string, or NULL if the
 *         allocation fails or if str is NULL.
 */

char *_strdup(char *str)
{
	int k = 0, l = 0;
	char *buff;

	if (str == NULL)
		return (0);
	while (str[k] != '\0')
		k++;

	buff = malloc(sizeof(char) * (k + 1));

	if (buff == NULL)
		return (0);

	for (l = 0; str[l]; l++)
		buff[l] = str[l];
	return (buff);
}
