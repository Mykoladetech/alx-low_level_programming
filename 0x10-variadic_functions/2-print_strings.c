#include "variadic_functions.h"
	#include <stdio.h>
	#include <stdarg.h>


	/**
	 * print_strings - Prints strings, followed by a new line.
	 * @separator: The character to be printed between strings.
	 * @n: The amount of strings passed to the function.
	 * @...: A variable number of strings to be printed.
	 *
	 * Description: If separator is NULL, it is not printed.
	 *              If one of the strings if NULL, (nil) is printed instead.
	 */
	void print_strings(const char *separator, const unsigned int n, ...)
	{
		va_list arm;
		char *buff;
		unsigned int fig;


		va_start(arm, n);


		for (fig = 0; fig < n; fig++)
		{
			buff = va_arg(arm, char *);


			if (buff == NULL)
				printf("(nil)");
			else
				printf("%s", buff);


			if (fig != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(arm);
	}


