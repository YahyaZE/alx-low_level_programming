#include "main.h"

/**
 * _sqrt_recursion - square root of a number.
 * @n: number
 * @val: int
 * Return: squar int
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 1));
}

/**
 * square - find start square root
 * @n: num
 * @val: initial
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
