#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all arguments.
 * @n: The number of arguments passed to the function.
 * @...: elipsis is a variable number of arguments to calculate the sum of.
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)

		sum += va_arg(list, int);

	va_end(list);

	return (sum);

}

