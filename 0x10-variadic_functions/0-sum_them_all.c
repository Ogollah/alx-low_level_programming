#include "variadic_functions.h"

/**
 * sum_them_all - Sum of all its paramters.
 * @n: Number of paramters.
 *
 * Return: 0 if n == 0 else sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list value_list;
	unsigned int i;
	unsigned int sum = 0;

	va_start(value_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(value_list, int);

	va_end(value_list);

	return (sum);
}
