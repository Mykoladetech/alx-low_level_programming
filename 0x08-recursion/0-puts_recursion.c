#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _puts_recursion - calculates the power of a given number
 * @s: the base number
 *
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

