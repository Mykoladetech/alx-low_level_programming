#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string representing the binary number
 *
 * Return: The converted unsigned int, or 0 if @b is NULL or contains
 *         characters other than '0' or '1', or if the binary number
 *         exceeds the maximum value of an unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val;

	if (b == NULL)
	return (0);
	 i = 0;
	val = 0;
	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val +=  b[i] - '0';
		i++;
	}
		return (val);

}

