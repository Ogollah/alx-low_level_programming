#include "variadic_functions.h"

/**
 * print_char - Print a character
 * @value_list: list of arguments.
 *
 *Return: Void.
 */
void print_char(va_list value_list)
{
	printf("%c", va_arg(value_list, int));
}

/**
 * print_int - Print an integer
 * @value_list: list of arguments.
 *
 *Return: Void.
 */
void print_int(va_list value_list)
{
	printf("%d", va_arg(value_list, int));
}

/**
 * print_float - Print a float
 * @value_list: list of arguments.
 *
 *Return: Void.
 */
void print_float(va_list value_list)
{
	printf("%f", va_arg(value_list, double));
}

/**
 * print_string  - Print out a string
 * @value_list: list of arguments.
 *
 *Return: Void.
 */
void print_string(va_list value_list)
{
	char *string = va_arg(value_list, char*);

	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s", string);
}

/**
 * print_all - Prints anything.
 * @format: Format that the arguments.
 *
 *Return: Void.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0, len = 0;
	char *sep = "";
	va_list value_list;

	print_t print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	len = sizeof(print) / sizeof(*print);

	va_start(value_list, format);

	while (format[i] != '\0')
	{
		j = 0;

		while (j < len)
		{
			if (format[i] == print[j].format)
			{
				printf("%s", sep);
				print[j].function(value_list);
				sep = ", ";
				j++;
				break;
			}
			j++;
		}
		i++;
	}
	va_end(value_list);
	printf("\n");
}
