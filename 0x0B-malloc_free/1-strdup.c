#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 * @str: character input
 * Return: NULL
 */

char *_strdup(char *str)
{
	unsigned int i, k;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	;
	p = (char *)malloc(sizeof(char) * (i + i));
	if (p == NULL)
		return (NULL);

	for (k = 0; k <= i; k++)
	p[k] = str[k];
	return (p);
}
