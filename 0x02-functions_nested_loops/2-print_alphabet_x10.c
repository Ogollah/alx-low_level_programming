#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lower cases 10x
 * Description: user nested for loop to print alphabet in lower case 10 times
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	int lower;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			putchar(lower);
		}
		putchar('\n');
	}
}
