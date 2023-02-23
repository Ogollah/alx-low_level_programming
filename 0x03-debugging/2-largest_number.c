#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer month
 * @b: second integer day
 * @c: third integer year
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
if ((c % 4 == 0 && c % 100 != 0) || c % 400 == 0)
{
if (a > 2 && b >= 60)
{
b++;
}
printf("Day of the year: %d\n", b);
printf("Remaining days: %d\n", 366 - b);
}
else
{
if (a == 2 && b == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", a, b - 31, c);
}
else
{
printf("Day of the year: %d\n", b);
printf("Remaining days: %d\n", 365 - b);
}
}
}
