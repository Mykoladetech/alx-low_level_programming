#include "main.h"
/*
 *
 *
 *
 */
void _print_rev_recursion(char *s)
{
	int len = 0;
	if (*s)
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
		len ++;
	}
	_putchar(len);
}
