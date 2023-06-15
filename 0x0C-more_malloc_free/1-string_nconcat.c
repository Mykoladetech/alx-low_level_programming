#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buff;
	unsigned int siz1 = 0, siz2 = 0, j = 0, k = 0;

	while (s1 && s1[siz1])
		siz1++;
	while (s2 && s1[siz2])
		siz2++;
	if (n < siz2)
		buff = malloc(sizeof(char) * (siz1 + n + 1));
	else
		buff = malloc(sizeof(char) * (siz1 + siz2 + 1));

	if (buff == NULL)
		return (0);
	while (k < siz1)
	{
		buff[k] = s1[k];
		k++;
	}
	while (n < siz2 && k < (siz1 + n + 1))
		buff[k++] = s2[j++];
	while (n >= siz2 && k < (siz1 + siz2 + 1))
		buff[k++] = s2[j++];

	buff[k] = '\0';

	return (buff);
}
