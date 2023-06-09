#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - calculates the length of a string recursively
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
