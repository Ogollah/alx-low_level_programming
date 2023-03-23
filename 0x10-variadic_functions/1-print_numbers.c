#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: Character used to separate the arguments when printing
 * @n: Number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list value_list;

	va_start(value_list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(value_list, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	_putchar('\n');
	va_end(value_list);
}
