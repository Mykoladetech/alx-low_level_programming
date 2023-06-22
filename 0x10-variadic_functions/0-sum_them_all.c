#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Calculates the sum of a variable number of integers.
 * @n: The total number of integers to be summed.
 *     It specifies the number of arguments following the 'n' parameter.
 *     The value of 'n' must be greater than 0.
 * @...: A variable number of integers to be summed.
 *       The actual number of integers depends on the value of 'n'.
 *
 * Return: The sum of all the integers.
 */
	int sum_them_all(const unsigned int n, ...)
	{
		va_list folder;
		unsigned int k = 0, plus = 0;


		va_start(folder, n);


		while (k < n)
		{
			plus += va_arg(folder, int);
			k++;
		}

		va_end(folder);


		return (plus);
}

