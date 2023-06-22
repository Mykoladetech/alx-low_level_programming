#include "variadic_functions.h"
#include <stdarg.h>


	/**
	 * sum_them_all - Returns the sum of all its paramters.
	 * @n: The number of paramters passed to the function.
	 * @...: A variable number of paramters to calculate the sum of.
	 *
	 * Return: If n == 0 - 0.
	 *         Otherwise - the sum of all parameters.
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

