#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int k = 0
		;
	while (argc > k)
	{
	printf("%s\n", argv[k]);
	k++;
	}
	return (0);
}
