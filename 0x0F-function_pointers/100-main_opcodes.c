
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always zero (Success)
 */
int main(int argc, char *argv[])
{
	int buff, k;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	buff = atoi(argv[1]);

	if (buff < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (k = 0; k < buff; k++)
	{
		if (k == buff - 1)
		{
			printf("%02hhx\n", arr[k]);
			break;
		}
		printf("%02hhx ", arr[k]);
	}
	return (0);
}

