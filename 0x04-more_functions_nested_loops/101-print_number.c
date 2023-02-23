#include "main.h"

/**
 * print_number - prints an integer
 * @n: Value to print
 *
 */
void print_number(int n)
{
	unsigned int  first_num = n, sec_num;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		first_num = n * -1;
	}
	sec_num = first_num;
	while (sec_num > 9)
	{
		div *= 10;
		sec_num = sec_num / 10;
	}
	while (div >= 1)
	{
		sec_num = first_num % div;
		first_num /= div;
		_putchar(first_num + '0');
		first_num = sec_num;
		div /= 10;
	}
}
