#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 *  @dest: destination
 *  @src: string
 *  @n: integer
 *  Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
