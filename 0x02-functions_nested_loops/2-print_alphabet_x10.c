#include "main.h"
/**
 * main - prints 10 times alphabet followby new line
 * Return: always return 0
 */
void print_alphabet_x10(void)
{
	char alp;
	int i;

	for (alp = 1; alp <= 10; alp++)
	{

	for (i = 'a'; i <= 'z'; i++)
	_putchar('\n');
	_putchar(i);
	}
}
