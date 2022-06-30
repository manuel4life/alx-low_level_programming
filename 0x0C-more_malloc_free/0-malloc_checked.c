#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory
 * @b: integer input
 * Return: 0 Always
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
