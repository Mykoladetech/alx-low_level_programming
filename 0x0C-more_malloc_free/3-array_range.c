#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * array_range - Creates an array of integers containing values from min
 * to max,inclusive, in ascending order.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: Pointer to the newly created array, or NULL if memory allocation
 * fails or if max is less than min.
 */

int *array_range(int min, int max)
{
	int *buff;
	int k, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	buff = malloc(sizeof(int) * len);

	if (buff == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		buff[k] = min++;

	return (buff);
}

