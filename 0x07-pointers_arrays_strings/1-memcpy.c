#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 * @dest: string input
 * @src: string input
 * @n: integer input
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	*(dest + i) = *(src + i);
	return (dest);
}
