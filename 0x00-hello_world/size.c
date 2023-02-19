#include<stdio.h>
/**
 * Main - "Write sa C program that print the the size of various
 * type the size on the computer."
 * Return: always 0.
 */
	int main(void);
{
	int i;
	char c;
	long int l;
	short int s;
		printf("the size of int:%lu bytes(s)\n", sizeof(i));
		printf("the size of char:%lu byte(s)\n", sizeof(c));
		printf("the size of long int:%lu byte(s)\n", sizeof(l));
		printf("the size of short int:%lu byte(s)\n", sizeof(s));
		return (0);
}
