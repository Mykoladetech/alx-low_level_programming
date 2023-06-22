#include "variadic_functions.h"
	#include <stdio.h>
	#include <stdarg.h>
/**
 * print_strings - Prints a variable number of strings with a separator.
 * @separator: A string used to separate the printed strings.
 *             If separator is NULL, no separator will be used.
 * @n: The total number of strings to be printed.
 *     It specifies the number of arguments following the 'n' parameter.
 *     The value of 'n' must be greater than 0.
 * @...: A variable number of strings to be printed.
 *       The actual number of strings depends on the value of 'n'.
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


