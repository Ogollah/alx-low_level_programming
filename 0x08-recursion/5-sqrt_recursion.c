#include "main.h"

/**
 * get_sqrt - Get a square root of a natural number
 * @g: Number of guess
 * @c: Number to find sqrt of
 *
 * Return: The sqrt of @c or else -1 for non natural number
 */
int get_sqrt(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (get_sqrt(g + 1, c));
}

/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: Number to find sqrt of
 *
 * Return: Natural square root of @n else -1 for non natural number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (get_sqrt(1, n));
}
