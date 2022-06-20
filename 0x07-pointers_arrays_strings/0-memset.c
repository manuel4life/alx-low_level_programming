#include "main.h"

/**
 * _memset - a function that fills memory
 * @s: first string
 * @b: second string
 * @n: integer input
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
