#include "main.h"



/**
 * _strme_recursion - lenght of the return
 * @s: calculated string
 *
 * Return: string lenght
 */
int _strme_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strme_recursion(s + 1));
}

/**
 * cheque_mate - palindrome character to be check
 * @s: check string
 * @z: changes
 * @len: string lenght
 *
 * Return: palindrome if 1 , if not 0
 */
int cheque_mate(char *s, int len, int z)
{
	if (*(s + z) != *(s + len - 1))
		return (0);
	if (z >= len)
		return (1);
	return (cheque_mate(s, z + 1, len - 1));
}

/**
 * is_palindrome - evaluate the parlindrome string
 * @s: reverse string
 *
 * Return: 1 if it is parlindrome, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (cheque_mate(s, 0, _strme_recursion(s)));
}

