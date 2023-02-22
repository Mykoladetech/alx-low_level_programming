#include "main.h"
/**
 * _isalpha - function that print alphabets
 *0c: parameter to be checked
 * Return: 1 if its alphabet and
 * 0 if otherwise
 */
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
