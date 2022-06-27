#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * _strdup - a function that returns a pointer
 * @str: character input
 * Return: NULL
 */

char *_strdup(char *str)
{
	int k, i;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; i <= *str; i++)
	{
	}
	i += 1;
	p = malloc(sizeof(char) * i);
	for (k = 0; k < i; k++)
	p[k] = str[k];
	if (p == NULL)
		return (NULL);
	return (p);
}
