#include "main.h"
/**
 *	_strlen - function that return the string
 *	@s: output
 *	Return: 0
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
