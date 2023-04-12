#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to retrieve the bit from
 * @index: the index of the bit to retrieve (0-indexed)
 *
 * Return: the value of the bit at the given index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int move = n >> index;
	int bit = move & 1;

	return (bit);
}
