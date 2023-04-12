#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *j = (char *)&k;

	if (*j)
	return (1);

	else

	return (0);
}
