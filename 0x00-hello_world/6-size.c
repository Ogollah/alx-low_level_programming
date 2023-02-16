#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
int i;
long int l;
long long int lli;
float f;

printf("Size of a char: %c byte(s)\n", (unsigned long)sizeof(ch));
printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
