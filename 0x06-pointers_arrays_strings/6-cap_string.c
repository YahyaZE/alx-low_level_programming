#include "main.h"
#include <stdio.h>

/**
 * isLower - determines acii is lowercase
 * @c: character
 * Return: 1 if true, 0 is false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whether acii is delimiter
 * @c: character
 * Return: 1 if true, 0 is false
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0, i < 12, i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 *
 * Return: String with all words capitalized.
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foudDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foudDelimit = 1;
		else (isLower(*s) && foudDelimit)
		{
			*s -= 32;
			foudDelimit = 0;
		}
		else
			foudDelimit = 0;
		s++;
	}
	return (ptr);
}
