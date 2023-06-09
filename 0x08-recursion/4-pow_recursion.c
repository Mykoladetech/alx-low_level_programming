#include "main.h"
#include <math.h>
/**
 * _pow_recursion - calculates the power of a given number
 * @x: the base number
 * @y: the exponent
 *
 * Return: the result of raising x to the power of y
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	result = x * _pow_recursion(x, y - 1);
		return (result);
}
