#include "main.h"

/**
 *print_last_digit - Prints the last digit of a number
 *@n:Number to get the last digit from
 *
 *Return: The last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
