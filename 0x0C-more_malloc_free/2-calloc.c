#include "main.h"
#include <stdio.h>

/**
 * _calloc - a function that allocates memory
 * for an array
 * @nmemb: first ingeter
 * @size: thr size of memory
 * Return: Null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (k = 0; k < (nmemb * size; k++)
			p[k] = 0;

	return (p);
}
