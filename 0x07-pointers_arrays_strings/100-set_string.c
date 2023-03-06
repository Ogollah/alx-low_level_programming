#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s:  The string to be set by @to
 * @to: The string used to set @s
 *
 * Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
