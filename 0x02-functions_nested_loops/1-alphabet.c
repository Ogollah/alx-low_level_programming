#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercase followed by a new line
 *
 *Return: void
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
