#include<unistd.h>

/**
 * main - And that price of art is useful -Dora Korpar,2015-10-19
 * return: always 1 (success)
 */
int main(void)
{
	write(2, "and that price of art is useful\" -Dora Korpar,2015-10-19\n", 59);
	return (1);
}
