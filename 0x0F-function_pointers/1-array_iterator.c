#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - each array ellement are to print on newly array line
 * @array: array
 * @size: number of element to  to print
 * @action: pointer to print in regular or hex
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}

