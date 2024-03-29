#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: nil
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (j < size)
	{
		if (cmp(array[j]))
			return (j);
		j++;
	}
	return (-1);
}

