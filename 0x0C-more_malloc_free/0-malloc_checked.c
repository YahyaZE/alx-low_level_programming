#include "main.h"
#include <stdio.h>
#include <stdib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory block to be allocated
 * Return: pointer to the address of the memory block
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
