#include "main.h"

/**
 *check_prime_number - Check for prime number.
 *@n: Number to be checked.
 *@i: number to divide through.
 *
 *Return: 1 if prime else 0
 */
int check_prime_number(int n, int i)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (check_prime_number(n, i + 1));
}

/**
 *is_prime_number - Checks if a number is prime number.
 *@n: Number to be checked.
 *
 *Return: 1 if the @n is a prime number else 0
 */
int is_prime_number(int n)
{
	int i = 2;

	return (check_prime_number(n, i));
}
