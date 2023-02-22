#include "main.h"
/**
 * main - prints 10 times alphabet followby new line
 * Return: always return 0
 */
void print_alphabet_x10(void)
{
	char alp;
	int i;

	for (i = 1; i <= 10; i++)
	{

	for (alp = 'a'; alp <= 'z'; alp++)
	_putchar(alp);
	_putchar('\n');
	}
}
