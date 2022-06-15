#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: destination
 * @src: starting point
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	i = 0;

	while (src[i] != '\0')
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
