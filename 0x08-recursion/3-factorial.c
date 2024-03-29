#include "main.h"

/**
 *factorial - Returns the factorial of a number @n.
 *@n: Number to determine its factorial.
 *
 *Return: Factorial value of @n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
