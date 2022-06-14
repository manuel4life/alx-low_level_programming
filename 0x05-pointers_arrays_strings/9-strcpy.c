#include "main.h"

/**
 * _strcpy - a function that copies the string pointer
 * @dest: first string
 * @src: second string
 * Return: 0 Always
 */

char *_strcpy(char *dest, char *src)
{
	int k = 0;

	while (*(src + k))
	{
		*(dest + k) = *(src + k);
		k++;
	}
	*(dest + k) = '\0';
	return (dest);
}
