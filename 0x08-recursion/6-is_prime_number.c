#include "main.h"

/**
 * is_prime_number - check fo prime
 * @n: num
 * @i: int
 * Return: int
 */

int check(int n, int i);
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - all num nuder this
 * @n: int
 * @i: initial
 * Return: int
 */

int check(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check(n, i + 1));
}
