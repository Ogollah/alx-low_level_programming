#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: Separator string to print between the strings
 * @n: Number of strings to print
 *
 * Return: Void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list value_list;

	va_start(value_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(value_list, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(value_list);
}
