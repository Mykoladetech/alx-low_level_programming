#include "main.h"
/**
 *swap_int - function that swaps the value of two integer
 *@b: second input
 * @a: first input
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
