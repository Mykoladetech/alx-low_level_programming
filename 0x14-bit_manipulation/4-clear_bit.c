#include <stdio.h>
#include<stdlib.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: a pointer to the number to modify
 * @index: the index of the bit to clear (0-indexed)
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{return (-1); }
	*n &= ~(1UL << index);
		return (1);
}
