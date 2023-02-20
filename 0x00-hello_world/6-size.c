#include<stdio.h>
/**
 * Main - print the the size of various type base on
 * the computer it is compiled and run on..
 * Return:always 0.
 */
int main(void)
{
	printf("the size of int: %lu bytes(s)\n", sizeof(int));

	printf("the size of char: %lu byte(s)\n", sizeof(char));
	printf("the size of long int: %lu byte(s)\n", sizeof(long int));
	printf("the size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("the size of floatin: %lu byte(s) \n", sizeof(float));
	return (0);
}
