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
	int i = 1, sum = 1;

	if ((argc < 3) || (argc > 3))
	{
	printf("errror");
	return (1);
	}
	while (i <= 2)
	{
	sum *= atoi(argv[i]);
	i++;
	}
	printf("%d\n", sum);
	return (0);
}
