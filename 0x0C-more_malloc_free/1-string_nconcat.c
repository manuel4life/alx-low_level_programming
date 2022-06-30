#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the counter
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size = 0, size1 = 0, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size] != '\0')
	{
		size++;
	}

	while (s2[size1] != '\0')
	{
		size1++;
	}

	if (n > size1)
		n = size1;
	p = malloc((size + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (k = 0; k < size; k++)
	{
		p[k] = s1[k];
	}

	for (; k < (size + n); k++)
	{
		p[k] = s2[k - size];
	}
	p[k] = '\0';

	return (p);
}
