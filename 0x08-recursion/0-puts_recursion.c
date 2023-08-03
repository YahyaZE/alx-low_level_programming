#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: pointer to the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_printf('\n');
	}
	else
	{
		_puts(*s);
		_puts_recursion(s + 1);
	}
}
