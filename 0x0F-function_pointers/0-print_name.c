#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @f: string to add
 * @name: pointer to function
 * Return: nill
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
