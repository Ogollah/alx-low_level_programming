#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower_char;

for (lower_char = 'a'; lower_char <= 'z'; lower_char++)
{
putchar(lower_char);
}
putchar('\n');
return (0);
}
