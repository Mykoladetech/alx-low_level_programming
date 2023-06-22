#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints multiple values based on the provided format.
 * @format: A string specifying the format of the values to be printed.
 *           The format string can contain 'c' for char, 'i' for integer,
 *           'f' for float, and 's' for string.
 *           Each format specifier must be followed by the corresponding
 *           argument.
 *           If format is NULL or an empty string, nothing will be printed.
 *           If a format specifier doesn't match the provided argument,
 *           "(nil)" will be printed for strings, and 0 for numeric types.
 *           Unknown format specifiers are ignored.
 *           The format string must be terminated with a NULL.
 *           Example: "cis" - char, integer, string.
 *                    "ff" - float, float.
 *                    "i"  - integer.
 *                    "sif" - string, integer, float.
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	char *buff, *sep = "";


	va_list file;


	va_start(file, format);


	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", sep, va_arg(file, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(file, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(file, double));
					break;
				case 's':
					buff = va_arg(file, char *);

				if (!buff)
					buff = "(nil)";
				printf("%s%s", sep, buff);
				break;
				default:
				k++;
				continue; }
			sep = ", ";
			k++;
		} }
	printf("\n");
	va_end(file); }
