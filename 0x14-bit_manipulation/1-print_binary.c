#include "main.h"
#include <stdio.h>
#include <stdib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

/**
 * print_binary - function that prints the binary representation of a number.
 * @n : unsigned long integer
 *
 * Return: binary
 */

void print_binary(unsigned long int n)

{
	char i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	if (n & 1)
	{
		i = '1';
		_putchar(i);
	}
	else
	{
		_putchar('0');
	}
}
