#include "main.h"
int check(char *s, int start, int end);
int _str_ln(char *s);

/**
 * is_palindrome - checker
 * @s: string
 * Return: int
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _str_ln(s)));
}

/**
 * _str_ln - length of string
 * @s: string
 * Return: length int
 */

int _str_ln(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _str_ln(s + 1));
}

/**
 * check - check characters
 * @s: string
 * @start: start
 * @end: len
 * Return: 1 or 0
 */

int check(char *s, int start, int end)
{
	if (s[start] != s[end - 1])
		return (0);
	if (start >= end)
		return (1);
	return (check(s, start + 1, end - 1));
}
