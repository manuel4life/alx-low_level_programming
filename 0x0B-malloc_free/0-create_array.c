#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array
 * @size: check
 * @c: character input
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
