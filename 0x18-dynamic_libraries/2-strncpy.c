#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the destinaton
 * @src: the string
 * @n: input integer
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
		if (k < n)
			dest[k] = src[k];
	while (k < n)
		dest[k++] = '\0';
	return (dest);
}
